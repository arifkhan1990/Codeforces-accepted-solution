#include<bits/stdc++.h>
using namespace std;

struct Input {
    int xi , yi;
}data[1001];

bool cmp (Input const& a , Input const& b) {
    return a.xi < b.xi;
}

int main()
{
    int sp, n , xi, yi,ans = 1, i = 0;
    cin >> sp >> n;
    for(int i = 0; i < n; i++) {
        cin >> xi >> yi;
        data[i].xi = xi;
        data[i].yi = yi;
    }
    sort(data,data+n,cmp);

    for(int j = 0; j < n; j++){
        if(data[j].xi < sp)
            sp += data[j].yi;
        else ans = 0;
    }
    cout << ((ans)? "YES":"NO") << endl;
    return 0;
}
