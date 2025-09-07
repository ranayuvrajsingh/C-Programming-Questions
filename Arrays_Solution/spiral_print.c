#include <stdio.h>
#include <stdlib.h>
int main(){int n,m; if(scanf("%d%d",&n,&m)!=2) return 0; int *A=malloc(n*m*sizeof(int)); for(int i=0;i<n*m;i++) scanf("%d",&A[i]); int top=0,bottom=n-1,left=0,right=m-1; while(top<=bottom&&left<=right){ for(int j=left;j<=right;j++) printf("%d ",A[top*m+j]); top++; for(int i=top;i<=bottom;i++) printf("%d ",A[i*m+right]); right--; if(top<=bottom){ for(int j=right;j>=left;j--) printf("%d ",A[bottom*m+j]); bottom--; } if(left<=right){ for(int i=bottom;i>=top;i--) printf("%d ",A[i*m+left]); left++; } } printf("\n"); free(A); return 0;}
