#include<iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n;
    int use[n+1] = {0};
    cin >> a;
    for(int i = 0; i < a;i++) {
        cin >> m;
        use[m] = 1;
    }
    cin >> b;
    for(int i = 0; i < b;i++) {
        cin >> m;
        use[m] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(use[i] == 0) {
            return cout << "Oh, my keyboard!" << endl, 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
