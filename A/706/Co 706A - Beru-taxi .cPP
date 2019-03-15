/*
                     #       # # #    # # #  # # # # #
                    # #      #    #     #    #
                  #     #    #     #    #    #
                 # # # # #   # # #      #    # # # #
                #         #  # #        #    #
               #           # #   #      #    #
              #             ##    #   # # #  #
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,i,j,lo=0,q,a[100001],t=0,a1,b,x,z,y;
	double k ,l = 1e99;
     cin >> a1>>b>>n;
     for(i=1;i<=n;i++){
     	cin >>x>>y>>z;
     	k =  hypot(x - a1 + 0., y - b + 0.) / z;
     	l = min(l,k);
     }
     printf("%.10f\n",l);
	return 0;
}
