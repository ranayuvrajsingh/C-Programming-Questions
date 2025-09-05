#include <stdio.h>
#define SWAP16(x) ((((x)&0xFF)<<8)|(((x)>>8)&0xFF))
int main(){unsigned short n;scanf("%hu",&n);printf("%hu",SWAP16(n));return 0;}