#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    char a;
    cin >> k;
    //int ar[4][4];
    int ar[10] = {0};

    for(int i = 0; i < 16; i++){
            cin >> a;
            ar[a]++;
        }

    for(int i = 1; i < 10; i++)
        if(ar[i+'0'] > 2*k) return cout << "NO\n", 0;

    cout << "YES\n";

    return 0;
}
