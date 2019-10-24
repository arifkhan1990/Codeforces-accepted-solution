#include<iostream>
using namespace std;

int main()
{
    int a[201], b[201], ans = 0, n;
    cin >> n;
    for(int i = 0; i < n ; i++)
        cin >> a[i] >> b[i];
    for(int i = 0; i < n; i++) {
            int up = 0, down = 0, left = 0, right = 0;
        for(int j = 0; j < n; j++) {
            if(b[i] == b[j] and a[j] > a[i]) right = 1;
            if(b[i] == b[j] and a[j] < a[i]) left = 1;
            if(a[i] == a[j] and b[j] > b[i]) down = 1;
            if(a[i] == a[j] and b[j] < b[i]) up = 1;
        }
        if(up and down and left and right) ans++;
    }
    cout << ans << endl;
    return 0;
}
