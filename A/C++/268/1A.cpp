#include<iostream>
using namespace std;

struct {
    int home, geust;
}team[101];
int main()
{
    int n, a,b,ans = 0;
    cin >> n;
    //int home[n+1] = {0},geust[n+1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> a >> b;
        team[a].home++;
        team[b].geust++;
        if(team[a].geust > 0) ans += team[a].geust;
        if(team[b].home > 0) ans += team[b].home;
    }
    cout << ans << endl;
    return 0;
}
