#include <stdio.h>
long long gcd(long long a,long long b){if(a<0)a=-a;if(b<0)b=-b;while(b){long long t=a%b;a=b;b=t;}return a;}int main(){long long a,b;if(scanf("%lld%lld",&a,&b)!=2)return 0;printf("%lld",gcd(a,b));return 0;}
