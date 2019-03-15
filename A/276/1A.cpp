#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, b, ans = -2000000000, r;
    cin >> n >> k;
    while(n--) {
        cin >> a >> b;
        r = a;
        if(b > k) {
            r -= (b - k);
        }
        ans = max(ans,r);
    }
    cout << ans << endl;
    return 0;
}
