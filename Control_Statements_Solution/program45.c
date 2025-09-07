#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<2)return 0;long long a,first,second;scanf("%lld",&a);first=a;second=-(1LL<<62);for(int i=1;i<n;i++){scanf("%lld",&a);if(a>first){second=first;first=a;}else if(a>second&&a<first)second=a;}if(second==-(1LL<<62))printf("No Second Largest");else printf("%lld",second);return 0;}
