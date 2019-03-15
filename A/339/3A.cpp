#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inp,s = "";
    cin >> inp;
    for(int i = 0; i < inp.size(); i+=2)
        s += inp[i];

    sort(s.begin(),s.end());

    for(int i = 0; i < s.size(); i++) {
        if(i) cout << '+';
        cout << s[i];
    }
    cout << endl;
    return 0;
}
