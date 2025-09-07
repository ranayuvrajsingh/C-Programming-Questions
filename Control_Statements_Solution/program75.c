#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)printf(" ");for(int j=0;j<2*i-1;j++)printf("*");if(i<n)printf("\n");}return 0;}
