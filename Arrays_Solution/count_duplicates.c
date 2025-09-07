#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); int cnt=0; for(int i=1;i<n;i++) if(a[i]==a[i-1]) cnt++; printf("%d\n",cnt); free(a); return 0;}
