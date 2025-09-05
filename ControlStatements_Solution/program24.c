#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<0)return 0;for(int i=0;i<n;i++){long long x;scanf("%lld",&x);printf(i==n-1?"%lld":"%lld ",x);}return 0;}
