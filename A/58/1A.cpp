#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, st = "hello";
    cin >> s;
    int j = 0;
    for(auto i : s) {
    	if(i == st[j]) j++;
    }
    cout << ((j == 5)? "YES" : "NO") << endl;
    return 0;
}
