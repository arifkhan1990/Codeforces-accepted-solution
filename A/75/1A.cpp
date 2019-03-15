#include<iostream>
using namespace std;

int withOutZero(int n)
{
    int ans = 0;
    while(n != 0) {
        if(n%10 != 0)
           ans = n%10 + (ans *10)  ;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    if(n == m) return cout << "YES" << endl, 0;
    int ans = n+m;

    ans = withOutZero(ans);
    ans = withOutZero(ans);

    n = withOutZero(n);
    n = withOutZero(n);
    m = withOutZero(m);
    m = withOutZero(m);

    if(ans == n+m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
