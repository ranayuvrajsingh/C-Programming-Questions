#include <stdio.h>
int main(){unsigned int n,pos;scanf("%u%u",&n,&pos);if(n&(1u<<pos))printf("Set");else printf("Not Set");return 0;}