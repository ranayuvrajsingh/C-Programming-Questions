#include <stdio.h>
#include <stdlib.h>
int main(){int n,d; if(scanf("%d%d",&n,&d)!=2) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); d%=n; for(int i=0;i<n;i++) printf("%d ", a[(i+d)%n]); printf("\n"); free(a); return 0;}
