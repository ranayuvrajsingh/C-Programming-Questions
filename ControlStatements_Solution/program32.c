#include <stdio.h>
int main(){long long a;int b;if(scanf("%lld%d",&a,&b)!=2)return 0;long long p=1;for(int i=0;i<b;i++)p*=a;printf("%lld",p);return 0;}
