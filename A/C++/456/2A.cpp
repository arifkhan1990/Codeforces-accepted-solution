#include<iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        if(a != b) return cout << "Happy Alex" << endl, 0;
    }
    cout << "Poor Alex" << endl;
    return 0;
}
