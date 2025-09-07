#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;long long a=0,b=1;for(int i=0;i<n;i++){printf(i==n-1?"%lld":"%lld ",a);long long c=a+b;a=b;b=c;}return 0;}
