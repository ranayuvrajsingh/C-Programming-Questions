#include <stdio.h>
#include <stdlib.h>
int main(){int n,l,r; if(scanf("%d%d%d",&n,&l,&r)!=3) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=0;i<(r-l+1)/2;i++){ int t=a[l+i]; a[l+i]=a[r-i]; a[r-i]=t;} for(int i=0;i<n;i++) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
