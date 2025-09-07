#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); int l=0,r=n-1; int best=INT_MAX,bi=0,bj=0; while(l<r){ int sum=a[l]+a[r]; if(abs(sum)<best){best=abs(sum); bi=a[l]; bj=a[r];} if(sum>0) r--; else l++; } printf("%d %d\n",bi,bj); free(a); return 0;}
