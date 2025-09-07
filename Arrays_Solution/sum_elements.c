#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; long long s=0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++){scanf("%d",&a[i]); s+=a[i];} printf("%lld\n",s); free(a); return 0;}
