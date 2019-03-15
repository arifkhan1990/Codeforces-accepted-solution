#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c,ans = 0;
    cin >> n >> a >> b >> c;
    for(int i = n/a; i >= 0; i--) {
        for(int j = n/b; j >= 0; j--) {
            int res = n - (i*a + j*b);
            if(res%c == 0 and res >= 0)
                ans = max(ans, i+j+res/c);
        }
    }
    cout << ans << endl;
    return 0;
}
