#include<iostream>
using namespace std;

int main()
{
    int data[6][6];

    int r,c,ans  = 0;
    for(int i = 1 ; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cin >> data[i][j];
            if(data[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }


    ans += abs(c-3) + abs(r-3);

    cout << ans << endl;
    return 0;
}
