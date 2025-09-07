#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);int c=0;while(n){c+=n&1;n>>=1;}printf("%d",c);return 0;}