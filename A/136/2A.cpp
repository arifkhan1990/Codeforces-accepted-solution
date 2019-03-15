#include<iostream>
using namespace std;

int main()
{
    int n, data;
    cin >> n;
    int fri[n+1];
    for(int i = 1; i <=n ;i++) {
        cin >> data;
        fri[data] = i;
    }
    for(int i = 1; i <= n ;i++)
        cout << fri[i] << " ";
    return 0;
}
