#include <stdio.h>
int main(){int a,b;if(scanf("%d%d",&a,&b)!=2)return 0;int m=a>b?a:b;int l=0;for(int i=m;i<=a*b;i++){if(i%a==0&&i%b==0){l=i;break;}}printf("%d",l);return 0;}
