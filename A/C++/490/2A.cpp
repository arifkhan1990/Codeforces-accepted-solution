#include<bits/stdc++.h>
using namespace std;

int main()
{
    int o = 0,t = 0,th = 0, n, da;
    queue<int>x, y, z;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> da;
        if(da == 1){
            o++;
            x.push(i);
        }else if(da == 2) {
            t++;
            y.push(i);
        }else {
            th++;
            z.push(i);
        }
    }
    int team = min(min(o,t),th);
    cout << team << endl;

    while(team--) {
        cout << x.front() << " " << y.front() << " " << z.front() << endl;
        x.pop();y.pop();z.pop();
    }
    return 0;
}
