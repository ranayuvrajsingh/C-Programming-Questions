#include <stdio.h>
#include <stdlib.h>
int main(){int n,m; if(scanf("%d%d",&n,&m)!=2) return 0; int *a=malloc(n*sizeof(int)); int *b=malloc(m*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int j=0;j<m;j++) scanf("%d",&b[j]); int i=0,j=0; while(i<n&&j<m){ if(a[i]>b[j]) printf("%d ",a[i++]); else printf("%d ",b[j++]); } while(i<n) printf("%d ",a[i++]); while(j<m) printf("%d ",b[j++]); printf("\n"); free(a); free(b); return 0;}
