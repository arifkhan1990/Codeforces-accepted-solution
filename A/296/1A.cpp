#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int ar[10001] = {0};
    for(int i = 0; i < n; i++) {
        cin >> x;
        ar[x]++;
        if(ar[x] > (n+1)/2) return cout << "NO\n", 0;
    }

    cout << "YES\n";
    return 0;
}
