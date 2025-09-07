#include <stdio.h>
#include <stdlib.h>
int main(){int r,c; if(scanf("%d%d",&r,&c)!=2) return 0; int *A=malloc(r*c*sizeof(int)); for(int i=0;i<r*c;i++) scanf("%d",&A[i]); for(int i=0;i<r*c;i++) printf("%d ",A[i]); printf("\n"); free(A); return 0;}
