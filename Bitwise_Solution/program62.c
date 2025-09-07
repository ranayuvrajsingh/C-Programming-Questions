#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);while(n%8==0&&n>1)n/=8;if(n==1)printf("Yes");else printf("No");return 0;}