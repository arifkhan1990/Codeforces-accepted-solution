/*                          CODEMAN
                        Arif Khan Nihar
                    Problem -A. Anton and Danik
*/
#include<bits/stdc++.h>
#define long long ll
//#define long int li
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    string s;
    int n,a_s=0,d_s=0;
    char ch;
    cin>>n;
    while(n--){
        cin>>ch;
        if(ch == 'A')a_s++;
        else d_s++;
    }
    if(a_s<d_s)
        cout<<"Danik\n";
    else if(a_s>d_s)
        cout<<"Anton\n";
    else
        cout<<"Friendship\n";
    return 0;
}
