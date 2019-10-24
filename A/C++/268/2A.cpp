#include<iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int h[n+1],g[n+1];
    for(int i = 0; i < n; i++) cin >> h[i] >> g[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(h[j] == g[i]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
