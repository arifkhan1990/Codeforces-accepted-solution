#include<bits/stdc++.h>
using namespace std;
const int k = 1e9+7;
int main()
{
	int a,b,c,n,m=-1;
	string ad;
	cin>>a>>ad;
	b = k;
	for(int i = 0;i<a;i++){
		cin >> n ;
		if(ad[i]!='L'){
			m = n;
		}else{
			if(m != -1)
			b = min(b,(n-m)/2);
		}
	}
	(b!=k)?cout<<b:cout<<-1;
	cout<<endl;
	return 0;
}
