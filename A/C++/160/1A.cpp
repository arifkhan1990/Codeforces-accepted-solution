#include<iostream>
using namespace std;

void merge(int data[], int tp[], int lo, int hi)
{
    if(lo == hi) return;
    int mid = (lo+hi)/2;

    merge(data,tp,lo,mid);
    merge(data,tp,mid+1,hi);

    for(int i = lo, j = mid+1, k = lo; k <= hi; k++) {
        if( i == mid + 1) tp[k] = data[j++];
        else if(j == hi+1) tp[k] = data[i++];
        else if(data[i] > data[j]) tp[k] = data[i++];
        else tp[k] = data[j++];
    }
    for(int i = lo; i <= hi; i++)
        data[i] = tp[i];
}
int main()
{
    int n,sum = 0,ans = 0, bigSum = 0;
    cin >> n;
    int data[n+1] = {0},tp[n+1];
    for(int i = 0; i < n; i++) {
        cin >> data[i];
        sum += data[i];
    }
    merge(data,tp,0,n-1);

    for(int i = 0; i < n and sum >= bigSum; i++) {
        bigSum += data[i];
        ans++;
        sum -= data[i];
    }
    cout << ans << endl;
    return 0;
}
