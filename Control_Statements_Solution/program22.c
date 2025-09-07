#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<=0)return 0;long long x,m;scanf("%lld",&x);m=x;for(int i=1;i<n;i++){scanf("%lld",&x);if(x>m)m=x;}printf("%lld",m);return 0;}
