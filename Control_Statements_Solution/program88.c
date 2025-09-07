#include <stdio.h>
int main(){long long n;if(scanf("%lld",&n)!=1)return 0;if(n<0)n=-n;long long se=0,so=0;while(n){int d=n%10;if(d%2==0)se+=d;else so+=d;n/=10;}printf("%lld %lld",se,so);return 0;}
