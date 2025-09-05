#include <stdio.h>
#define SETBIT(n,pos) ((n)|(1u<<(pos)))
#define CLEARBIT(n,pos) ((n)&~(1u<<(pos)))
#define TOGGLEBIT(n,pos) ((n)^(1u<<(pos)))
#define CHECKBIT(n,pos) (((n)>>(pos))&1u)
int main(){unsigned int n,pos;scanf("%u%u",&n,&pos);printf("%u %u %u %u",SETBIT(n,pos),CLEARBIT(n,pos),TOGGLEBIT(n,pos),CHECKBIT(n,pos));return 0;}