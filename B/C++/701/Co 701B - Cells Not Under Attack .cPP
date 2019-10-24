#include <bits/stdc++.h>
using namespace std;
  int ro[223456];
  int co[223456];
int main() {
	int x,y;
	int k=0,l=0;
	cin>>x>>y;
	long long re = 1ll*x*x;
	while(y--){
		int n,m;
		cin >> n>>m;
		if(!ro[n]) re -= x-l,ro[n] = 1, k++;
		if(!co[m]) re -= x-k,co[m] = 1,l++;

		cout<<re<<" ";
	}
	cout<<endl;
	return 0;
}
