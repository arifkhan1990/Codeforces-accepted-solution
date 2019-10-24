#include <iostream>
using namespace std;

int main() {
    int n,k,t=0,y=0;
    cin>>n;
    y=n;

    while(y--){
      cin>>k;
      if(k==1) t++;
      }
   if(n==1 && k==1) cout<<"YES\n";
   else if(n>1 && t == n-1)cout<<"YES\n";
   else cout<<"NO\n";

	return 0;
}
