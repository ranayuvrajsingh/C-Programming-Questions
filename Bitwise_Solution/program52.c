#include <stdio.h>
int main(){unsigned int n;scanf("%u",&n);unsigned int rev=0,t=n;while(t){rev=(rev<<1)|(t&1);t>>=1;}if(rev==n)printf("Yes");else printf("No");return 0;}