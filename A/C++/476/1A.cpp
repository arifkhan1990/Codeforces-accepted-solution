#include<iostream>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    ans = (n+1) / 2;
    ans += m - 1;
    ans /= m;

    cout << ((ans>n)? -1: ans*m) << endl;
    return 0;
}
