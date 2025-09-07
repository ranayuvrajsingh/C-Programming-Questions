#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);unsigned int l=(n&1),f=(n>>(31))&1;if(f!=l){n^=1u; n^=(1u<<31);}printf("%u",n);return 0;}