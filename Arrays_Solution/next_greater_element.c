#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=0;i<n;i++){ int ng=-1; for(int j=i+1;j<n;j++) if(a[j]>a[i]){ ng=a[j]; break; } printf("%d ",ng);} printf("\n"); free(a); return 0;}
