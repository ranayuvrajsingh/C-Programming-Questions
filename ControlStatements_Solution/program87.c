#include <stdio.h>
int main(){long long n;if(scanf("%lld",&n)!=1)return 0;if(n<0)n=-n;long long s=0;while(n){long long d=n%10;s+=d*d*d;n/=10;}printf("%lld",s);return 0;}
