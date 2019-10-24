#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(i=0;i<n;i++)
#define d2(i,j)     cout << i + 1 << " " << j + 1 << endl
 #define d  puts("YES")
  #define d1  puts("NO")
int r, c, t;
char s[1001][1001];
int R[1001], C[1001];

int main() {
	int i,j;
    cin >> r >> c;
    FOR( i, 0, r) {
        scanf("%s", s[i]);
        FOR(j, 0, c) {
            if (s[i][j] == '*') {
                t++;
                R[i]++, C[j]++;
            }
        }
    }
    FOR(i, 0, r) {
        FOR(j, 0, c) {
            int x = 0;
            if (s[i][j] == '*') x++;
            if (R[i] + C[j] - x == t) {
                d;
                d2(i,j);
                return 0;
            }
        }
    }
    d1;
    return 0;
}
