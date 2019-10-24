#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m, mx = 0, mn = INT_MAX, res = INT_MAX;
    cin >> n >> m;

    int a[n], b[m];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
        res = min(res, b[i]);
    }

    if(max(2*mn, mx) < res)
        cout << max(2*mn, mx) << endl;
    else cout << -1 << endl;
    return 0;
}
