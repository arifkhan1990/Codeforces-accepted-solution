#include<bits/stdc++.h>
using namespace std;

void merge(int ar[],int tp[], int lo, int hi) {
	if(lo == hi) return;
	int mid = (lo+hi)/2;

	merge(ar,tp,lo,mid);
	merge(ar,tp,mid+1,hi);

	int i , j , k;
	for(i = lo, j = mid+1, k = lo; k <= hi; k++) {
		if( i == mid + 1) tp[k] = ar[j++];
		else if(j == hi+1) tp[k] = ar[i++];
		else if(ar[i] > ar[j]) tp[k] = ar[i++];
		else tp[k] = ar[j++];
	}
	for(k = lo; k <= hi; k++) ar[k] = tp[k];
}

int main()
{
    int n, m, ans = INT_MAX;
    cin >> n >> m;
    int data[m],tp[m];
    for(int i = 0; i < m; i++) cin >> data[i];

    merge(data,tp,0,m-1);
    for(int i = 0; i <= m - n; i++) {
       ans = min(ans, data[i] - data[i+n-1]);
    }
    cout << ans << endl;
    return 0;
}

