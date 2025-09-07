#include <stdio.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int s=0,x; for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ scanf("%d",&x); if(i+j==n-1) s+=x; } } printf("%d\n",s); return 0;}
