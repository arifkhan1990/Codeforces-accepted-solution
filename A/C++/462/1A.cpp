#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char data[n+1][n+1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> data[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
            int ans = 0;
        for(int j = 1; j <= n ; j++) {
            if(data[j-1][i] == 'o') ans++;
            if(data[j+1][i] == 'o') ans++;
            if(data[j][i-1] == 'o') ans++;
            if(data[j][i+1] == 'o') ans++;
            if(ans%2 != 0){
                    return cout << "NO" << endl, 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
