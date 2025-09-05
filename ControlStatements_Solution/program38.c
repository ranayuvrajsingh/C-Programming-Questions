#include <stdio.h>
int main(){double a,b;char op;if(scanf(" %c%lf%lf",&op,&a,&b)!=3)return 0;switch(op){case '+':printf("%g",a+b);break;case '-':printf("%g",a-b);break;case '*':printf("%g",a*b);break;case '/':if(b==0)printf("Error");else printf("%g",a/b);break;default:printf("Invalid");}return 0;}
