#include<iostream>
using namespace std;

int main()
{
    int ans = 0;
    string a, b;
    cin >> a >> b;
    for(int i = 0 ;i < b.size(); i++)
        if(a[ans] == b[i]) ans++;

    cout << ++ans << endl;
    return 0;
}
