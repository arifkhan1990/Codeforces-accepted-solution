#include <bits/stdc++.h>
using namespace std;

bool print(std::string::size_type n, std::string  &s)
{
    if (n == std::string::npos) {
      return false ;
    } else {
         return true ;
    }
}

int main()
{
    std::string::size_type n=0;
   bool b ,d;
    string s;
    string s1 ="1111111",s2 = "0000000";

    cin >> s;
    n = s.find(s1);
    b = print(n, s);

    n = s.find(s2);
   d =  print(n, s);
   if(b||d) cout << "YES\n";
   else cout << "NO\n";

}
