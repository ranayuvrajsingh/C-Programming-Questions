#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *A=malloc(n*n*sizeof(int)); for(int i=0;i<n*n;i++) scanf("%d",&A[i]); for(int i=0;i<n;i++){ for(int j=0;j<n;j++) if(i>=j) printf("%d ",A[i*n+j]); else printf("0 "); printf("\n"); } free(A); return 0;}
