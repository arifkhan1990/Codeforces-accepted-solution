#include<bits/stdc++.h>
using namespace std;

struct Input {
    int t, p;
}data[5001];

bool cmp(Input const& a , Input const& b) {
    return a.t < b.t;
}

int main()
{
    int n, one = 0, two = 0, three = 0;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++){
        cin >> data[i].t;
        data[i].p = i+1;
        if(data[i].t == 1) one++;
        else if(data[i].t == 2) two++;
        else three++;
    }
    sort(data,data+n,cmp);

    int team = min(min(one,two),three);

    cout << team << endl;
    if(team != 0){
    for(int i = 0; team > 0 and i < n; i++) {
        cout << data[i].p << " " << data[i+one].p << " " << data[i+two+one].p << endl;
        team--;
    }
    }
    return 0;
}
