#include <stdio.h>
int main(){int a,b;if(scanf("%d%d",&a,&b)!=2)return 0;int d=a>b?1:(a<b?-1:0);switch(d){case 1:printf("%d",a);break;case -1:printf("%d",b);break;case 0:printf("Equal");}return 0;}
