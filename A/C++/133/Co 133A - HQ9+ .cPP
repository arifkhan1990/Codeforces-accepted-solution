#include <bits/stdc++.h>
using namespace std;

string s,s1,t,r;
int main()
{
	int n,i,j,k,l;
string a;
cin >>a;
for(i=0;i<a.size();i++){
	if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9'){
		cout <<"YES";
		return 0;
	}
}
   	cout <<"NO";
	return 0;
}
