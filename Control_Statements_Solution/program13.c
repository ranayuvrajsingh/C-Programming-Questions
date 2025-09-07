#include <stdio.h>
int main(){int m,y;if(scanf("%d%d",&m,&y)!=2)return 0;int d;if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)d=31;else if(m==4||m==6||m==9||m==11)d=30;else if(m==2)d=((y%400==0)||(y%4==0&&y%100!=0))?29:28;else{printf("Invalid");return 0;}printf("%d",d);return 0;}
