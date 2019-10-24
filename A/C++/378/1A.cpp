#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k,f = 0,m = 0,l = 0;
    cin >> n >> k;

    for(int i = 1; i <= 6; i++) {
        int x = abs(i - n);
        int y = abs(i - k);

        if(x == y) m++;
        else if(x > y) l++;
        else f++;
    }
    cout << f << " " << m << " " << l << endl;
    return 0;
}
