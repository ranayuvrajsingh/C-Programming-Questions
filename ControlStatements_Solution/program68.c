#include <stdio.h>
int main(){long long a;int b;if(scanf("%lld%d",&a,&b)!=2)return 0;long long p=1;int i=0;while(i<b){p*=a;i++;}printf("%lld",p);return 0;}
