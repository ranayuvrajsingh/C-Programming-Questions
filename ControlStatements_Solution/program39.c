#include <stdio.h>
int main(){long long n;if(scanf("%lld",&n)!=1)return 0;long long t=n<0?-n:n,r=0;while(t){r=r*10+t%10;t/=10;}if(n<0)r=-r;if(r==n)printf("Palindrome");else printf("Not Palindrome");return 0;}
