#include <stdio.h>
#include <string.h>
int main(){char s[1005];if(!fgets(s,sizeof(s),stdin))return 0;int l=0,r=strlen(s)-1;while(r>=0&&(s[r]=='\n'||s[r]=='\r'))r--;int ok=1;for(;l<r;l++,r--)if(s[l]!=s[r]){ok=0;break;}printf(ok?"Palindrome":"Not Palindrome");return 0;}
