#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    int ar[n+1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        ar[0] += a;
        ar[1] += b;
        ar[2] += c;
    }
    if(ar[0] != 0 or ar[1] != 0 or ar[2] != 0)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
