#include <stdio.h>
#include <stdlib.h>
int cmpd(const void*a,const void*b){return (*(int*)b-*(int*)a);}
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmpd); for(int i=0;i<n;i++) printf("%d ",a[i]); printf("\n"); free(a); return 0;}
