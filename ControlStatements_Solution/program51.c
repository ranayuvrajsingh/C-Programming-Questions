#include <stdio.h>
int main(){int r,c;if(scanf("%d%d",&r,&c)!=2)return 0;long long A[100][100],B[100][100];for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%lld",&A[i][j]);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%lld",&B[i][j]);for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf(j==c-1?"%lld":"%lld ",A[i][j]+B[i][j]);if(i<r-1)printf("\n");}return 0;}
