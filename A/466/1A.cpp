#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m , a, l;
    long ans = 0;
    cin >> n >> m >> a >> l;
    if(m > n and a*n > l) return cout << l << endl, 0;
    else if (m > n and a*n < l) return cout << a << endl, 0;
    if(m*a > l) {
        ans = (n>m)? (n/m)*l : l;
        if(n > m and n%m > 0) ans += ((n%m)*a < l)?(n%m)*a:l;
    }else {
        ans = n*a;
    }
    cout << ans << endl;
    return 0;
}
