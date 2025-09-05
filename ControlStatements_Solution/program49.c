#include <stdio.h>
int main(){int r,c;if(scanf("%d%d",&r,&c)!=2)return 0;long long s[1000]={0};for(int i=0;i<r;i++)for(int j=0;j<c;j++){long long x;scanf("%lld",&x);s[j]+=x;}for(int j=0;j<c;j++)printf(j==c-1?"%lld":"%lld ",s[j]);return 0;}
