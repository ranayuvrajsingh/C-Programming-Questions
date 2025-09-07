#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); long long xr=0; for(int i=0;i<n;i++) xr^=a[i]; int setbit = xr & -xr; int x=0,y=0; for(int i=0;i<n;i++){ if(a[i]&setbit) x^=a[i]; else y^=a[i]; } printf("%d %d\n",x,y); free(a); return 0;}
