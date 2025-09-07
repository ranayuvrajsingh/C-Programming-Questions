#include <stdio.h>
int main(){long long n;if(scanf("%lld",&n)!=1||n<0)return 0;long long i=0;while(i*i<n)i++;printf(i*i==n?"Yes":"No");return 0;}
