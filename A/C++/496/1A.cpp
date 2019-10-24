#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int data[n+1], dif[n+1], ans = 0, res = INT_MAX;
    cin >> data[0];
    for(int i = 1; i < n; i++) {
        cin >> data[i];
        dif[i] = data[i] - data[i-1];
        ans = max(ans , dif[i]);
    }

    for(int i = 2; i < n; i++)
        res = max(min(res,dif[i]+dif[i-1]),ans);
    cout << res << endl;
    return 0;
}
