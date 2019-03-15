#include<iostream>
using namespace std;

int main()
{
    int n, m, k ,v, p = 0;
    cin >> n >> m;
    int data[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> k;
        int b = 1;
        for(int j = 1; j <= k; j++) {
            cin >> v;
            if(m > v and b) {
                    data[p++] = i;
                    b = 0;
            }
        }
    }
    cout << p << endl;
    for(int i = 0; i < p ; i++) cout << data[i] << " ";
    return 0;
}
