#include <stdio.h>
int pal(long long n){long long r=0,t=n;while(t){r=r*10+t%10;t/=10;}return r==n;}int palb(unsigned int n){unsigned int r=0,t=n;while(t){r=(r<<1)|(t&1);t>>=1;}return r==n;}int main(){unsigned int n;if(scanf("%u",&n)!=1)return 0;printf(pal(n)&&palb(n)?"Yes":"No");return 0;}
