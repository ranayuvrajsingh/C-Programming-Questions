#include <stdio.h>
long long rev(long long n){long long r=0;while(n){r=r*10+n%10;n/=10;}return r;}int main(){long long n;if(scanf("%lld",&n)!=1)return 0;long long s=n<0?-n:n;printf("%lld",n<0?-rev(s):rev(s));return 0;}
