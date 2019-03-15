#include<iostream>
using namespace std;

int main()
{
    int n = 1, k , l;
    cin >> k >> l;
    for(int i = 1; n <= l; i++) {
        n*=k;
        if(n == l)
            return cout << "YES\n" << i-1 << endl, 0;
    }
    cout << "NO\n";
    return 0;
}
