#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;long long a[1000],b[1000];for(int i=0;i<n;i++)scanf("%lld",&a[i]);for(int i=0;i<n;i++)scanf("%lld",&b[i]);int eq=1;for(int i=0;i<n;i++)if(a[i]!=b[i]){eq=0;break;}printf(eq?"Equal":"Not Equal");return 0;}
