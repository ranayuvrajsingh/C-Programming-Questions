#include <stdio.h>
int rec(int *a,int n){ if(n==0) return 0; int last=a[n-1]; return (last%2==0?last:0)+rec(a,n-1); }
int main(){int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); printf("%d\n",rec(a,n)); return 0;}
