#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=1,k,l,j,i,s=0;
int a[101],b[101];
cin >> k ;
for(i=1;i<=k;i++){
	cin >> a[i];
	l = a[1];
	if(a[i] != l )n = 0;

	s +=a[i];
}
for(i=1;i<=k;i++){
	for(j=i+1;j<=k;j++){
	if(a[i]+a[j] == s/(k/2)){
	if(n!=1 && i == 2)
	cout<<j<<" "<<i<<endl;
	else
	cout<<i<<" "<<j<<endl;
	a[i] = 0;a[j] = 0;
	}
}
}
    return 0;
}
