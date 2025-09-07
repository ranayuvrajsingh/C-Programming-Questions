#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); int *b=malloc(n*sizeof(int)); for(int i=0;i<n;i++){scanf("%d",&a[i]); b[i]=a[i];} for(int i=0;i<n;i++) printf("%d ",b[i]); printf("\n"); free(a); free(b); return 0;}
