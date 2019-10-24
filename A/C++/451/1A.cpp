#include<iostream>
using namespace std;

int main()
{
    int n, m , ans = 0;
    cin >> n >> m;
    cout << (((ans = (n < m)? n : m)%2)? "Akshat" : "Malvika") << endl;
    return 0;
}
