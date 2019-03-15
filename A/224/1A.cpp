#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c,s1,s2,s3,ans;
    cin >> a >> b >> c;

    s1 = sqrt((a*b) / c);
    s2 = sqrt((a*c) / b);
    s3 = sqrt((b*c) / a);
    ans = (s1+s2+s3);
    cout << ans*4 << endl;
    return 0;
}
