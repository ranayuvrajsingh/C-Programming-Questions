#include <stdio.h>
int main(){char a[1005],b[1005],c[2100];if(!fgets(a,1005,stdin))return 0;if(!fgets(b,1005,stdin))return 0;int i=0;while(a[i]&&a[i]!='\n'){c[i]=a[i];i++;}int j=0;while(b[j]&&b[j]!='\n'){c[i++]=b[j++];}c[i]=0;printf("%s",c);return 0;}
