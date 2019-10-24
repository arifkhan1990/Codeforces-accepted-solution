#include <iostream>
using namespace std;

int main(void) {
	int a,b=0,c;
	char ad,bd;
	cin>>a;
	cin>>bd;
	a=a-1;
	while(a--){
		cin>>ad;
		if(ad==bd)b++;
		else bd=ad;
	}
	cout<<b<<endl;
	return 0;
}
