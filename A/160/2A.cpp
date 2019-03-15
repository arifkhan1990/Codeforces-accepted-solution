#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101], to = 0, ans = 0, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        to += a[i];
    }

    (to /= 2)++;
    sort(a,a+n);
    while(sum < to) {
        ans++;
        sum += a[n-1];
    }
    cout << ans << endl;
    return 0;
}
