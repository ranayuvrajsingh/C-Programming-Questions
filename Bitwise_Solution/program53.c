#include <stdio.h>
int main(){unsigned int n,k;scanf("%u%u",&n,&k);unsigned int res=(n<<k)|(n>>(32-k));printf("%u",res);return 0;}