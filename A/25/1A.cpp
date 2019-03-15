#include<iostream>
using namespace std;

int main()
{
    int n, a, o = 0 , e = 0;
    cin >> n;
    int odd[n+1], even[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a%2) odd[o++] = i;
        else even[e++] = i;
    }
    cout << ((o>e)? even[0] : odd[0]) << endl;
    return 0;
}
