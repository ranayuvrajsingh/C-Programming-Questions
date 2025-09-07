#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; long long p=1; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++){scanf("%d",&a[i]); p*=a[i];} printf("%lld\n",p); free(a); return 0;}
