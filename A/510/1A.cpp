#include<iostream>
using namespace std;

int main()
{
    int n, m, act = 1;
    cin >> n >> m;
    for(int i = 1; i <=n ; i++) {
        for(int j = 1; j <= m; j++) {
            if(i%2){
                cout <<"#";
            }else {
                if(act == 1 and j < m-1){
                    cout << ".";
                }else if(act == 1 and j == m) {
                    cout << "#";
                    act = 0;
                }else if(act == 0 and j == 1) {
                    cout << "#";
                }else {
                    cout << ".";
                    if(act == 0 and j == m) act = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
