#include <stdio.h>
void rec(int *a,int i,int n){ if(i==n) return; rec(a,i+1,n); printf("%d ",a[i]); }
int main(){int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); rec(a,0,n); printf("\n"); return 0;}
