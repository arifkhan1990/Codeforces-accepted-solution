#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n,l,k,k1;
	string a,b;
	cin>>a>>b;
	l = a.size();
	k = b.size();


	if(k<l) k = l;
	for(i=0;i<k;i++){
		if(a[i] != b[i] && ( a[i] != b[i]-32 && a[i] != b[i]+32)){
			if((int)tolower(a[i])<(int)tolower(b[i])){
				cout<<"-1";return 0;
			}
				if((int)tolower(a[i])>(int)tolower(b[i])){
				cout<<"1";return 0;
			}

		}
	}

				cout<<"0";return 0;

	return 0;
}
