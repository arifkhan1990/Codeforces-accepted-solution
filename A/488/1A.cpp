#include<bits/stdc++.h>
using namespace std;
bool lucky(int n)
{
    while(n != 0) {
        if(abs(n%10) == 8) return true;
        n/=10;
    }
    return false;
}

int main()
{
    int n, ans = 0;
    cin >> n;

    while(1) {
            ans++;
            n++;
        if(lucky(n)) return cout << ans << endl, 0;
    }
    return 0;
}
