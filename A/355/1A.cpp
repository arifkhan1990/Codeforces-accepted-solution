#include<iostream>
using namespace std;

int main()
{
    int k, d;
    cin >> k >> d;
    if(d == 0 and  k > 1) return cout << "No solution\n", 0;

    cout << d ;
     while(--k) cout << 0 ;
    return 0;
}
