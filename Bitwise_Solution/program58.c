#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);unsigned int even=n&0xAAAAAAAA,odd=n&0x55555555;n=(even>>1)|(odd<<1);printf("%u",n);return 0;}