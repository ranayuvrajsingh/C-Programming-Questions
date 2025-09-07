#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int ce=0,co=0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]%2==0) ce++; else co++;} printf("%d %d\n",ce,co); free(a); return 0;}
