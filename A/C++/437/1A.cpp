#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,mx = 0, mn = INT_MAX, mxc = 0, mnc = 0;
    string s, ans = "", res = "";

    for(int i = 0; i < 4; i++) {
        cin  >> s;
        if(mx < s.size()) {
            ans = 'A'+i;
            mx = s.size();
        }
        if(mn > s.size()) {
            res = 'A'+i;
            mn = s.size();
        }
    }

    if(mx == a) mxc++;
    if(mx == b) mxc++;
    if(mx == c) mxc++;
    if(mx == d) mxc++;

    if(mn == a) mnc++;
    if(mn == b) mnc++;
    if(mn == c) mnc++;
    if(mn == d) mnc++;

    if(mxc == 2 or mnc == 2) cout << 'C' << endl;
    else if(mxc > mnc) cout << ans << endl;
    else if(mxc <= mnc) cout << res << endl;

    return 0;
}
