#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++){scanf("%d",&a[i]); printf("%d ",a[i]*a[i]);} printf("\n"); free(a); return 0;}
