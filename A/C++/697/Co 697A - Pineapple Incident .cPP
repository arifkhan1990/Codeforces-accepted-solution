#include <iostream>
using namespace std;
int main(){
	long long int t,s,x;
	cin>>t>>s>>x;
	if(x-t > 1 || x-t == 0){
		if(((x-t)%s) <2){
			cout<<"YES"<<endl;
	          return 0;
		}
	}

		cout<<"NO"<<endl;
	return 0;
}
