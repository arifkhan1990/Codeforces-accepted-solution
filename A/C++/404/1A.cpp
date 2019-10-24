#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch;
    cin >> n;
    map<char,int>da, other;
    //int da[n] = {0}, other[n]={0};
    char data[n+1][n+1];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ch;
            data[i][j] = ch;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
                ch = data[i][j];
            if(i == j or j == n - i - 1){
                da[ch]++;
            }
            else {
                other[ch]++;
            }

        }
    }

    char c = data[0][0], d = data[0][1];
    if(da[c] == (n*2) -1 and other[d] == (n*n) - ((n*2) - 1) and c != d ){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    cout << da[c] << " " << other[d] << endl;
    return 0;
}
