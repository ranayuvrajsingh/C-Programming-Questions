#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;long long s=0;for(int i=0;i<n;i++)for(int j=0;j<n;j++){long long x;scanf("%lld",&x);if(i<=j)s+=x;}printf("%lld",s);return 0;}
