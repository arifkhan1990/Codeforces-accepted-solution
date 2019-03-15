#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, b = 0, w = 0;
    cin >> n >> m;
    char data[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> data[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(data[i][j] == '.') {
                if((i+j) % 2) cout << 'W';
                else cout << 'B';
            }else cout << data[i][j];
        }
        cout << endl;
    }
    return 0;
}
