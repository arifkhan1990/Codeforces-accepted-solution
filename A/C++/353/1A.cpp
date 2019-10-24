#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, ls = 0,rs = 0, p = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        ls += x;
        rs += y;
        if((x%2) != (y%2)) p++;
    }
    if(ls%2 == 0 and rs%2 == 0) return cout << 0 << endl, 0;
    if(p < 1 or p%2 == 1) return cout << -1 << endl, 0;

    cout << 1 << endl;
    return 0;
}
