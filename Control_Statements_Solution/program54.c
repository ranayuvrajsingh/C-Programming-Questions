#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;long long a[1000];for(int i=0;i<n;i++)scanf("%lld",&a[i]);for(int i=n-1;i>=0;i--)printf(i==0?"%lld":"%lld ",a[i]);return 0;}
