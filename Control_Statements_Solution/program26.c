#include <stdio.h>
int main(){char s[1005];if(!fgets(s,sizeof(s),stdin))return 0;int c=0;for(int i=0;s[i];i++){char ch=s[i];if(ch>='A'&&ch<='Z')ch+=32;if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')c++;}printf("%d",c);return 0;}
