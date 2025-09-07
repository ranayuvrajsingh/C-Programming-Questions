#include <stdio.h>
#define SWAP32(x) (((x>>24)&0xFF)|((x>>8)&0xFF00)|((x<<8)&0xFF0000)|((x<<24)&0xFF000000))
int main(){unsigned int n;scanf("%u",&n);printf("%u",SWAP32(n));return 0;}