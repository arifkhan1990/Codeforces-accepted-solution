#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l, r;
    cin >> l >> r;
    if(l%2 != 0) l+=1;
    if(r-l < 2) return cout << -1 << endl, 0;
    cout << l << " " << l+1 << " " << l+2 << endl;
    return 0;
}
