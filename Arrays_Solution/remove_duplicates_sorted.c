#include <stdio.h>
int main(){int n; if(scanf("%d",&n)!=1) return 0; int a[10000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); int m=0; for(int i=0;i<n;i++) if(i==0||a[i]!=a[i-1]) a[m++]=a[i]; for(int i=0;i<m;i++) printf("%d ",a[i]); printf("\n"); return 0;}
