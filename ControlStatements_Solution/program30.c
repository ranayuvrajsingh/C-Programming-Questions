#include <stdio.h>
int main(){char s[1005];if(!fgets(s,sizeof(s),stdin))return 0;int n=0;for(;s[n]&&s[n]!='\n';n++);printf("%d",n);return 0;}
