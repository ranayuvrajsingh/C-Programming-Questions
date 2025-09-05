#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;int a[1000],v[1000]={0};for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){if(v[i])continue;int f=1;for(int j=i+1;j<n;j++)if(a[j]==a[i]){f++;v[j]=1;}printf("%d:%d%s",a[i],f,i==n-1?"":" ");}return 0;}
