#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *A=malloc(n*n*sizeof(int)); int *B=malloc(n*n*sizeof(int)); for(int i=0;i<n*n;i++) scanf("%d",&A[i]); for(int i=0;i<n*n;i++) scanf("%d",&B[i]); int *C=calloc(n*n,sizeof(int)); for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++) C[i*n+j]+=A[i*n+k]*B[k*n+j]; for(int i=0;i<n;i++){ for(int j=0;j<n;j++) printf("%d ",C[i*n+j]); printf("\n"); } free(A); free(B); free(C); return 0;}
