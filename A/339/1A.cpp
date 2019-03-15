#include <bits/stdc++.h>
using namespace std;

void merge(int ar[],int tp[], int lo, int hi) {
	if(lo == hi) return;
	int mid = (lo+hi)/2;

	merge(ar,tp,lo,mid);
	merge(ar,tp,mid+1,hi);

	int i , j , k;
	for(i = lo, j = mid+1, k = lo; k <= hi; k++) {
		if( i == mid + 1) tp[k] = ar[j++];
		else if(j == hi+1) tp[k] = ar[i++];
		else if(ar[i] < ar[j]) tp[k] = ar[i++];
		else tp[k] = ar[j++];
	}
	for(k = lo; k <= hi; k++) ar[k] = tp[k];
}

int main() {
	string s,data;

	int input = 0,j = 0;
	cin >> s;
	int value[s.size()],tp[s.size()];
	for(int i = 0; i <= s.size();i++) {
		if(s[i] == '+' or i == s.size()) {
			value[j++] = input;
			data = "";
			input = 0;
		}else {
			data += s[i];
			input = s[i] - '0'  + input * 10;
		}
	}

	merge(value,tp,0,j-1);
		for(int i = 0; i < j; i++) {
			cout << value[i];
			if(i == j - 1)
			   cout << endl;
			else cout << "+";
		}

	return 0;
}
