#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);unsigned int r=0;for(int i=0;i<32;i++){r<<=1;r|=(n&1);n>>=1;}printf("%u",r);return 0;}