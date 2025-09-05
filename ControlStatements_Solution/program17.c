#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;unsigned long long f=1;for(int i=2;i<=n;i++)f*=i;printf("%llu",f);return 0;}
