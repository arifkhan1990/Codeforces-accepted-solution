#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x, ans;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n ; i++) {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    ans = ar[0];
    for(int i = 0; i < n;i++) {
        if(ar[i]%ans != 0) {
            ans--;
            --i;
        }
    }
    cout << ans*n << endl;
    return 0;
}

