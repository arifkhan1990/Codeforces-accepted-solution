#include<iostream>
using namespace std;

int main()
{
    int n , m, oc = 0, r = 0, c = 0;
    cin >> n >> m;
    char ar[n+1][m+1];
    int ans = n*m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ar[i][j];

            if(ar[i][j] == 'S') {
                oc = 1;
            }
        }

        if(oc == 0) r++ ;
        oc = 0;
        cout << endl;
    }
    oc = 0;
        for(int k = 0; k < m; k++) {
            for(int i = 0; i < n; i++) {

            if(ar[i][k] == 'S'){
                oc = 1;
            }
        }
        if(oc == 0)c++;
        oc = 0;
    }

    cout << ((r != n)? (c*n + ((r)?(r*m) - c*r : 0)): n*m) << endl;
    return 0;
}

