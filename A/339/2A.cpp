#include<iostream>
using namespace std;

int main()
{
    char s[201];
    int i, j;
    scanf("%s",s);
    for(i=0;s[i];i+=2)for(j=i;s[j];j+=2)if(s[i]>s[j])s[i]^=s[j]^=s[i]^=s[j];
    puts(s);
    return 0;
}
