#include <stdio.h>
int main(){int N;if(scanf("%d",&N)!=1)return 0;long long S=(long long)N*(N+1)/2;for(int i=0;i<N-1;i++){int x;scanf("%d",&x);S-=x;}printf("%lld",S);return 0;}
