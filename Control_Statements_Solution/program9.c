#include <stdio.h>
int main(){char ch;if(scanf(" %c",&ch)!=1)return 0;int a=(ch>='a'&&ch<='z');int b=(ch>='A'&&ch<='Z');printf((a||b)?"Alphabet":"Not Alphabet");return 0;}
