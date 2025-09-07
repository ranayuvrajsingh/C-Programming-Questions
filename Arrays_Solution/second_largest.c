#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); int mx=INT_MIN,second=INT_MIN; for(int i=0;i<n;i++){ if(a[i]>mx){second=mx; mx=a[i];} else if(a[i]>second && a[i]<mx) second=a[i]; } printf("%d\n",second); free(a); return 0;}
