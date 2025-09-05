#include <stdio.h>
int main(){char s[1005];if(!fgets(s,sizeof(s),stdin))return 0;int i=0;while(s[i]){char ch=s[i];if(ch>='a'&&ch<='z')ch-=32;putchar(ch);i++;}return 0;}
