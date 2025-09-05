#include <stdio.h>
int main(){int a,b;if(scanf("%d%d",&a,&b)!=2)return 0;if(a>b)printf("Max=%d Min=%d",a,b);else if(b>a)printf("Max=%d Min=%d",b,a);else printf("Equal");return 0;}
