#include<iostream>
using namespace std;

int main()
{
    string inp,ans = "",res = "";
    int sp = 0;
    cin >> inp;
    for(int i = 0; i < inp.size(); i++) {
    	if(inp[i] == 'W' and inp[i+1] == 'U' and inp[i+2] == 'B') {
    		i+=2;
    		if(!ans.empty() and !sp){
    			ans += ' ';
    			sp = 1;
    		}

    	}else {
    		ans += inp[i];
    		sp = 0;
    	}
    }
    cout << ans << endl;
    return 0;
}
