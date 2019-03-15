#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n,l,k,k1,j;
	string a;

	cin>>a;
	set<char>st;
	l = a.size();
	for(i=0;i<l;i++) {
       st.insert(a[i]);
	}
    if(st.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout << "IGNORE HIM!"<<endl;
	return 0;
}
