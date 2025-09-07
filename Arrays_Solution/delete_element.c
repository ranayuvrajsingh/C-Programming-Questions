#include <stdio.h>
#include <stdlib.h>
int main(){int n,x; if(scanf("%d%d",&n,&x)!=2) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); int pos=-1; for(int i=0;i<n;i++) if(a[i]==x){ pos=i; break; } if(pos!=-1){ for(int i=pos;i<n-1;i++) a[i]=a[i+1]; n--; } for(int i=0;i<n;i++) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
