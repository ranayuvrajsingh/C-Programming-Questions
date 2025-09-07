#include <stdio.h>
int rec(int *a,int i,int n){ if(i>=n-1) return 1; if(a[i]<a[i+1]) return rec(a,i+1,n); return 0; }
int main(){int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); printf("%d\n",rec(a,0,n)); return 0;}
