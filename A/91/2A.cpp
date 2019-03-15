#include<iostream>
using namespace std;

bool ck(int n) {
	while(n > 0) {
	   int r = n%10;
        n /= 10;
        if(r != 4 and r != 7) return 0;
	}
	return 1;
}
int main()
{
    int n;
    cin >> n;

        for(int i = 2; i <= n ; i++) {
        	if(n%i == 0 and ck(i)) {
        		cout << "YES" << endl;
        		return 0;
        	}
        }

    cout << "NO" << endl;
    return 0;
}
