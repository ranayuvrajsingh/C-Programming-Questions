#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;char ch='A';for(int i=1;i<=n;i++){for(int j=1;j<=i;j++)printf("%c",ch);if(i<n)printf("\n");if(ch<'Z')ch++;}return 0;}
