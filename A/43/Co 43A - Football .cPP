#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b,c;
	int n,t=1,t1=0;
	cin >> n >> b;
	//b = a;
	for(int i = 1; i<n ;i++){
		cin >> a;
		if(a==b)
		t++;
		else {
			c = a ;
			t1++;
		}
	}
	if(t>t1)
	cout << b;
	else
	cout << c;

	return 0;
}
