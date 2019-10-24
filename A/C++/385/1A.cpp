#include<iostream>
using namespace std;

int main()
{
    int n ,c, a = 0 , b, ans = 0;
    cin >> n >> c;

    while(n--) {
         b = a;
        cin >> a;

    if(b >= a) {
        if(ans <= b-a){
            ans = b-a;
        }
      }
    }
    cout << ((ans < c)?0:ans - c) << endl;
    return 0;
}
