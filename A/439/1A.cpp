#include<iostream>
using namespace std;

int main()
{
    int n, t, s;
    cin >> n >> t;
    int ans = (n-1) * 10;
    for(int i = 0; i < n; i++) {
            cin >> s;
        ans += s;
    }

    if(ans > t)
        cout << -1 << endl;
    else
        cout << (n-1) * 2 + (t - ans)/5 << endl;
    return 0;
}
