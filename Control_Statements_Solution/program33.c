#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;unsigned long long f=1;int i=2;while(i<=n){f*=i;i++;}printf("%llu",f);return 0;}
