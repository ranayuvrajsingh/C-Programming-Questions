#include <stdio.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int x=0; for(int i=1;i<=n;i++) x^=i; for(int i=0;i<n-1;i++){ int v; scanf("%d",&v); x^=v; } printf("%d\n",x); return 0;}
