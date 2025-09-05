#include <stdio.h>
int main(){unsigned int n,p1,p2;scanf("%u%u%u",&n,&p1,&p2);unsigned int b1=(n>>p1)&1,b2=(n>>p2)&1;if(b1!=b2){n^=(1u<<p1);n^=(1u<<p2);}printf("%u",n);return 0;}