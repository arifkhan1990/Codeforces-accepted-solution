#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    string s;
    int ar[n][m];
    for(int i = 0; i < n; i++) {
            cin >> s;
        for(int j = 0; j < m; j++) {
            ar[i][j] = s[j] - '0';
        }
    }
    for(int i = 0; i < n; i++) {
         int val = 0;
        for(int j = 0; j < m; j++) {
                int res = 1;
            for(int k = 0; k < n ; k++) {
                if(ar[k][j] > ar[i][j]) res = 0;
            }
            if(res) val = 1;
        }
        if(val) ans++;
    }

    cout << ans << endl;
    return 0;
}
