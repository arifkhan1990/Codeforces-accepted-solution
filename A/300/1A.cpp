#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, k = 1;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    cout << 1 << " " << ar[0] << endl;

    if(ar[n-1] > 0) cout << 1 << " " << ar[n-1] << endl;
    else {
        cout << 2 << " " << ar[1] << " " << ar[2] << endl;
        swap(ar[1],ar[n-1]);
        swap(ar[2],ar[n-2]);
        k++;
    }
    cout << n - k - 1;
    for(int i = 1; i < n-k; i++)
        cout << " " << ar[i];

    return 0;
}
