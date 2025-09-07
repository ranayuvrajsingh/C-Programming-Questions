#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); int mn=INT_MAX,second=INT_MAX; for(int i=0;i<n;i++){ if(a[i]<mn){second=mn; mn=a[i];} else if(a[i]<second && a[i]>mn) second=a[i]; } printf("%d\n",second); free(a); return 0;}
