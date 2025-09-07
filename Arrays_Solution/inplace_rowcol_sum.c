#include <stdio.h>
#include <stdlib.h>
int main(){int r,c; if(scanf("%d%d",&r,&c)!=2) return 0; int *A=malloc(r*c*sizeof(int)); for(int i=0;i<r*c;i++) scanf("%d",&A[i]); for(int i=0;i<r;i++){ int s=0; for(int j=0;j<c;j++) s+=A[i*c+j]; A[i*c+0]=s; } for(int i=0;i<r;i++){ for(int j=0;j<c;j++) printf("%d ",A[i*c+j]); printf("\n"); } free(A); return 0;}
