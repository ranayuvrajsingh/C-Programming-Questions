#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); for(int i=0;i<n;i++) if(i==0||a[i]!=a[i-1]) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
