#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<0)return 0;long long s=0;int i=0;while(i<n){long long x;scanf("%lld",&x);s+=x;i++;}printf("%lld",s);return 0;}
