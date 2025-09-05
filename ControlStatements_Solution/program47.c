#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;int ok=1;for(int i=0;i<n;i++)for(int j=0;j<n;j++){int x;scanf("%d",&x);if((i==j&&x!=1)||(i!=j&&x!=0))ok=0;}printf(ok?"Identity":"Not Identity");return 0;}
