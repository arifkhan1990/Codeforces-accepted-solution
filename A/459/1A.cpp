#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2, a , b;

    cin >> x1 >> y1 >> x2 >> y2;
    a = x1- x2;
    b = y1- y2;

    if(a != 0 and  b != 0) {
        swap(y1,y2);
    }else if(a != 0) {
        y1 += abs(a);
        y2 += abs(a);
    }else {
        x1 += abs(b);
        x2 += abs(b);
    }

    if(a != 0 and b != 0 and abs(a) != abs(b))
        cout << -1 << endl;
    else
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    return 0;
}
