#include<bits/stdc++.h>
using namespace std;

struct {
    int price, qty;
}laptob[500001];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> laptob[i].price >> laptob[i].qty;
    }

    for(int i = 0; i < n-1; i++) {
        if(laptob[i].qty <= laptob[i+1].qty or laptob[i].price >= laptob[i+1].price)
            return cout << "Poor Alex" << endl, 0;
    }
    cout << "Happy Alex" << endl;
    return 0;
}
