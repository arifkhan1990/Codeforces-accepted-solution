#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,x,i=1,n,j,l=0,y;
     string a,b,c,d,e;
     size_t p ;
     size_t tt;
     cin >> a;
     p = a.find('e');
     b = a.substr(0,p);

     c = a.substr(p+1);
     n = atoi(c.c_str());
     l = b.length();
     tt = b.find('.');
     e = b.substr(0,tt);
     d = b.substr(tt+1);
     y = d.size();

     if(d=="0" && n==0 )
     cout<<e;
     else{
     for(i=0;i<l;i++){

            if(n == 0 && b[i]=='.')
                cout <<'.';
           else if(i==tt && b != "0")
              ;
           else if(i == (tt+n) && b[i+1]!='\0')
            cout <<b[i]<<'.';
            else
                cout<<b[i];

     }
     }
            	if (y<n){
                		y=n-y;
                		for(j=0;j<y;j++)
                		cout<<'0';
     	}
    return 0 ;
}
