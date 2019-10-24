#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t=0,i,j;
    string a;
    cin >> a ;
    for(i=0;i<a.size();i++){
    	if(a[i]=='4' || a[i] == '7')
    		t++;
    }
        if(t==4 || t== 7)
    	cout<<"YES\n";
    	else
    	cout<<"NO\n";

    return 0;
}
