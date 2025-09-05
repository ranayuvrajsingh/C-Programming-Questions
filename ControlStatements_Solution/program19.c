#include <stdio.h>
#include <stdlib.h>
int main(){long long n;if(scanf("%lld",&n)!=1)return 0;if(n<0)n=-n;int s=0;while(n){s+=n%10;n/=10;}printf("%d",s);return 0;}
