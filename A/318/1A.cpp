#include<iostream>
using namespace std;

int main()
{
    long long n , m, ans = 0,res;
    cin >> n >> m;
    ans  = (n%2)? (n+1)/2 : n/2;
    res = (m <= ans) ? m*2 - 1 : (m - ans)*2;
    cout << res << endl;
    return 0;
}
