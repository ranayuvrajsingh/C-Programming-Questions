#include <stdio.h>
#define SWAP64(x) (((x>>56)&0xFF)|((x>>40)&0xFF00)|((x>>24)&0xFF0000)|((x>>8)&0xFF000000)|((x<<8)&0xFF00000000)|((x<<24)&0xFF0000000000)|((x<<40)&0xFF000000000000)|((x<<56)&0xFF00000000000000))
int main(){unsigned long long n;scanf("%llu",&n);printf("%llu",SWAP64(n));return 0;}