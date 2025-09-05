#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;int a[1000],m=0;for(int i=0;i<n;i++){int x,dup=0;scanf("%d",&x);for(int j=0;j<m;j++)if(a[j]==x){dup=1;break;}if(!dup)a[m++]=x;}for(int i=0;i<m;i++)printf(i==m-1?"%d":"%d ",a[i]);return 0;}
