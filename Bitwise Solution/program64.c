#include <stdio.h>
int main(){unsigned int a,b;scanf("%u%u",&a,&b);unsigned int s=a+b;int c=0;while(s){c+=s&1;s>>=1;}printf("%d",c);return 0;}