#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,mx = 0, mi = INT_MAX,mxIdx = 0, miIdx = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(mx < a) {
                mx = a;
                mxIdx = i;
        }
        if(mi >= a) {
                mi = a;
                miIdx = i;
        }
    }
    if(mxIdx > miIdx) miIdx++;
    cout << abs(mxIdx - 1)  + abs(miIdx-n) << endl;
    return 0;
}
