#include<iostream>
using namespace std;

int main()
{
    int y, k, n;
    cin >> y >> k >> n;

    int x = k - y%k;
    if(x+y > n) return cout << -1 << endl , 0;

    for(int i = x ; i <= n-y; i+=k)
        cout << i << " ";

    return 0;
}
