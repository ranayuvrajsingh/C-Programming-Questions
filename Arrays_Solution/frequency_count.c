#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); int cur=a[0],cnt=1; for(int i=1;i<n;i++){ if(a[i]==cur) cnt++; else{ printf("%d:%d\n",cur,cnt); cur=a[i]; cnt=1;} } printf("%d:%d\n",cur,cnt); free(a); return 0;}
