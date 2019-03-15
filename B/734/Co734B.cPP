/*                          CODEMAN
                        Arif Khan Nihar
                    Problem -B. Anton and Digits
*/
#include<bits/stdc++.h>
#define long long ll
//#define long int li
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    string s;
    int d2,d3,d5,d6,mi = 1000001,mi2=1000001,sum=0;
    scanf("%d %d %d %d",&d2,&d3,&d5,&d6);
     mi = min(d2,min(d5,d6));
     sum += 256*mi;
     d2 -= mi , d5 -= mi, d6 -= mi;
     if(d2 != 0 and d3 != 0){
        mi2 = min(d2,d3);
        sum += 32*mi2;
     }
        cout<<sum<<endl;

    return 0;
}

