#include <stdio.h>
#include <stdlib.h>
int main(){int n,pos; if(scanf("%d%d",&n,&pos)!=2) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=pos;i<n-1;i++) a[i]=a[i+1]; for(int i=0;i<n-1;i++) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
