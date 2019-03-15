#include<iostream>
using namespace std;

int main()
{
    int n, x, l, r, time = 1, ans = 0;

    cin >> n >> x;
    while(n--) {
        cin >> l >> r;
        time += ((l-time)/x)*x;
        ans +=  r + 1 - time;
        time = r + 1;
    }
    cout << ans << endl;
    return 0;
}
