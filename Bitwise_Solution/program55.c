#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);if(((n&(n>>1))==0))printf("Yes");else printf("No");return 0;}