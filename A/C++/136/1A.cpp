#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int data[n+1], friends[n+1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> data[i];
        friends[data[i]] = i+1;
    }
    sort(data,data+n);
    for(int i = 0; i < n ; i++)
        cout << friends[data[i]] << " ";
    return 0;
}
