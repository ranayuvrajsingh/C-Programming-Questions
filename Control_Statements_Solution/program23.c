#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<=0)return 0;long long x,m;int i=0;while(i<n){scanf("%lld",&x);if(i==0||x<m)m=x;i++;}printf("%lld",m);return 0;}
