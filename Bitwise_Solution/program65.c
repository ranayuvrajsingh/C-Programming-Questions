#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);while(n%16==0&&n>1)n/=16;if(n==1)printf("Yes");else printf("No");return 0;}