#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); int i=0,j=n-1; while(i<j){ while(i<j&&a[i]<0) i++; while(i<j&&a[j]>=0) j--; if(i<j){ int t=a[i]; a[i]=a[j]; a[j]=t; } } for(int k=0;k<n;k++) printf("%d ",a[k]); printf("\n"); free(a); return 0;}
