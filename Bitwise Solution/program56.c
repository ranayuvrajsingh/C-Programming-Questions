#include <stdio.h>
int main(){unsigned int a,b;scanf("%u%u",&a,&b);unsigned int x=a^b;int c=0;while(x){c+=x&1;x>>=1;}printf("%d",c);return 0;}