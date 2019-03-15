#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2, ans = 0, resH = 0, resM = 0, rM;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    if(m1 > m2) ans = (60 - m1) + m2;
    else ans = (h2 - h1)*60 + (m2-m1);
    ans /= 2;
    resH = h1 + ans/60;
    rM = m1 + ans%60;
    if( rM / 60 > 0) resH +=  rM / 60;
    resM = rM%60;
    if(resH < 10) cout <<0;
    cout << resH  << ":";
    if(resM < 10) cout << 0;
    cout << resM << endl;
    return 0;
}
