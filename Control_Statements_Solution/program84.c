#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;char ch='A'+n-1;for(int i=n;i>=1;i--){for(int s=0;s<n-i;s++)printf(" ");for(int j=0;j<2*i-1;j++)printf("%c",ch);if(i>1)printf("\n");if(ch>'A')ch--;}return 0;}
