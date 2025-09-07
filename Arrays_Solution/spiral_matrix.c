#include <stdio.h>
#include <stdlib.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int *A=calloc(n*n,sizeof(int)); int top=0,bottom=n-1,left=0,right=n-1,val=1; while(top<=bottom&&left<=right){ for(int j=left;j<=right;j++) A[top*n+j]=val++; top++; for(int i=top;i<=bottom;i++) A[i*n+right]=val++; right--; if(top<=bottom){ for(int j=right;j>=left;j--) A[bottom*n+j]=val++; bottom--; } if(left<=right){ for(int i=bottom;i>=top;i--) A[i*n+left]=val++; left++; } } for(int i=0;i<n;i++){ for(int j=0;j<n;j++) printf("%d ",A[i*n+j]); printf("\n"); } free(A); return 0;}
