#include<bits/stdc++.h>
using namespace std;

    int main() {
    	int k,l,i,j;
    	size_t t;

     string a,b,d,g;
	cin >> a;
	cin >> b;		i=0;
	if(a[0]=='0'){

		while(a[i]=='0'){
			i++;
			t = i;
		}
	a = a.substr((t-1)+1);
		k = a.size();
	}
	if(b[0]=='0'){
        i=0;
		while(b[i]=='0'){
			i++;
			t = i;
		}
		b = b.substr((t-1)+1);
	l = b.size();
	}
	if(a[0]!='0'){
			k = a.size();
	}
		if(b[0]!='0'){
			l = b.size();
	}

if(k==l){
 for(i=0;i<k;i++){
	if((int)a[i]<(int)b[i]){
	cout << "<" <<endl;
	return 0;
	}else if((int)a[i]>(int)b[i]){
		cout <<">"<<endl;
		return 0;
	}
 }
cout <<"="<<endl;
return 0;
}else if(k<l){
 cout << "<" <<endl;
}else{
	cout <<">"<<endl;
}

	return 0;
}
