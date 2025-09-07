#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=0;i<n;i++) if(a[i]%2==0) printf("%d ",a[i]); printf("\n"); for(int i=0;i<n;i++) if(a[i]%2) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
