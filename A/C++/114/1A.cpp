#include<iostream>
using namespace std;

int main()
{
    int ans = 0, k, l;
    cin >> k >> l;
    while( l%k == 0) {
        ans++;
        l/=k;
    }
    if(l > 1) cout << "NO" << endl;
    else cout << "YES\n" << ans-1 << endl;
    return 0;
}
