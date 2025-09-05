#include <stdio.h>
int main(){int n,m;if(scanf("%d%d",&n,&m)!=2)return 0;int u[2000],k=0,x;for(int i=0;i<n;i++){scanf("%d",&x);int f=0;for(int j=0;j<k;j++)if(u[j]==x){f=1;break;}if(!f)u[k++]=x;}for(int i=0;i<m;i++){scanf("%d",&x);int f=0;for(int j=0;j<k;j++)if(u[j]==x){f=1;break;}if(!f)u[k++]=x;}for(int i=0;i<k;i++)printf(i==k-1?"%d":"%d ",u[i]);return 0;}
