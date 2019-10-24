#include<iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string one = "",two = "",three = "",ans ;
    for(auto i : a) {
        if(i != '+')
            (i == '1')? one += "1+" : (i == '2') ? two += "2+" : three += "3+" ;
    }
    ans = one + two + three;
    ans = ans.substr(0,ans.size()-1);
    cout << ans << endl;
    return 0;
}
