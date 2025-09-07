#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *A=malloc(n*n*sizeof(int)); for(int i=0;i<n*n;i++) scanf("%d",&A[i]); int ok=1; for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(A[i*n+j]!=A[j*n+i]) ok=0; printf("%d\n",ok); free(A); return 0;}
