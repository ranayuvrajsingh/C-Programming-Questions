#include <stdio.h>
#include <stdlib.h>
int main(){int n,key; if(scanf("%d%d",&n,&key)!=2) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); int idx=-1; for(int i=0;i<n;i++) if(a[i]==key){ idx=i; break; } printf("%d\n",idx); free(a); return 0;}
