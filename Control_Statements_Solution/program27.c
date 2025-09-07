#include <stdio.h>
int main(){char s[2005];if(!fgets(s,sizeof(s),stdin))return 0;int i=0,in=0,w=0;while(s[i]){if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){if(in){w++;in=0;}}else in=1;i++;}if(in)w++;printf("%d",w);return 0;}
