#include<iostream>
using namespace std;

int main()
{
    int n, k, ans = 0;
    string s;
    cin >> n >> k;
    while(n--) {
        cin >> s;
        int d = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '4' or s[i] == '7') d++;
        if(d <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}
