#include<iostream>
using namespace std;

int main()
{
    int n, chT = 0, biT(0), baT(0), ans = 0,a;
    cin >> n;
    for(int i = 1; i <= n ; i++) {
        cin >> a;
        if(i%3 == 1) chT += a;
        else if(i%3 == 2) biT += a;
        else baT += a;
    }
    if(chT >= biT and chT >= baT) cout << "chest" << endl;
    else if(biT >= chT and biT >= baT) cout << "biceps" << endl;
    else if(baT >= chT and baT >= biT) cout << "back" << endl;
    return 0;
}
