#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,a[1001],j;
    cin >> t ;
    long long ans,n;
    a[0]=1;
    for(i=1;i<=32;i++)
        a[i]=(2*a[i-1]);
    while(t--)
    {
        cin >> n ;
        ans=(n*(n+1))/2;
        i=0;
        while(a[i]<=n)
        {
            ans-=(2*a[i]);
            i++;
        }
        cout << ans<<"\n";
    }
    return 0;
}
