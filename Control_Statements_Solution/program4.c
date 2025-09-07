#include <stdio.h>
int main(){int y;if(scanf("%d",&y)!=1)return 0;printf((y%400==0)||(y%4==0&&y%100!=0)?"Leap Year":"Not Leap Year");return 0;}
