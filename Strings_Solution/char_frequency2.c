#include <stdio.h>
int main() {
    // Same as char_frequency
    char str[200]; int freq[256]={0};
    printf("Enter string: "); fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]&&str[i]!='\n';i++) freq[(unsigned char)str[i]]++;
    for(int i=0;i<256;i++) if(freq[i]>0) printf("'%c': %d\n",i,freq[i]);
    return 0;
}
