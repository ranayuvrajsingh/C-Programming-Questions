#include <stdio.h>
#include <stdlib.h>
int main(){int n,k; if(scanf("%d%d",&n,&k)!=2) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); k%=n; for(int i=0;i<n;i++) printf("%d ", a[(i+k)%n]); printf("\n"); free(a); return 0;}
