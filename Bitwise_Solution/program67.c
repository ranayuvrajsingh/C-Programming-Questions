#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);for(int i=1;i<32;i+=2)n^=(1u<<i);printf("%u",n);return 0;}