#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)printf(" ");for(int j=1;j<=2*i-1;j++)printf((j==1||j==2*i-1)?"*":" ");printf("\n");}for(int i=n-1;i>=1;i--){for(int s=0;s<n-i;s++)printf(" ");for(int j=1;j<=2*i-1;j++)printf((j==1||j==2*i-1)?"*":" ");if(i>1)printf("\n");}return 0;}
