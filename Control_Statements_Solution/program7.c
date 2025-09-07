#include <stdio.h>
int main(){int a,b,c;if(scanf("%d%d%d",&a,&b,&c)!=3)return 0;int x=a>=b&&a>=c?a:(b>=a&&b>=c?b:c);printf("%d",x);return 0;}
