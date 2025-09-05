#include <stdio.h>
int main(){int r,c;if(scanf("%d%d",&r,&c)!=2)return 0;for(int i=0;i<r;i++){long long sum=0;for(int j=0;j<c;j++){long long x;scanf("%lld",&x);sum+=x;}printf(i==r-1?"%lld":"%lld ",sum);}return 0;}
