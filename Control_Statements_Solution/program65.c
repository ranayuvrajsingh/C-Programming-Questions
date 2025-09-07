#include <stdio.h>
int main(){long long a,b;if(scanf("%lld%lld",&a,&b)!=2)return 0;if(a>b){long long t=a;a=b;b=t;}long long s=0;for(long long i=a;i<=b;i++)if(i%2==0)s+=i;printf("%lld",s);return 0;}
