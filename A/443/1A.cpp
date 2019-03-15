#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1001];
    int ar[26] = {0};
    gets(s);
    set<char>ans;
    for(int i = 1; i < strlen(s) - 1; i+=3) {
            ans.insert(s[i]);
    }
    cout << ans.size() << endl;
    return 0;
}
