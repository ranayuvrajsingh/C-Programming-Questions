#include <stdio.h>
int main(){int N;if(scanf("%d",&N)!=1)return 0;long long s=0;for(int i=1;i<=N;i++)if(i%3&&i%5)s+=i;printf("%lld",s);return 0;}
