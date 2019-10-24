#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b, r, d;
    while(scanf("%d%d%d", &n, &a, &b)==3)
    {
 d  = (a+b)%n;
 if(d<0)d+=n;
 if(d==0)d=n;
  printf("%d\n",d);
    }
    return 0;
}
