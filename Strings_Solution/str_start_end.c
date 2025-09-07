#include <stdio.h>
#include <string.h>
int starts_with(const char*s,const char*p){return strncmp(s,p,strlen(p))==0;}
int ends_with(const char*s,const char*suf){int sl=strlen(s),sufl=strlen(suf);return sl>=sufl&&strcmp(s+sl-sufl,suf)==0;}
int main() {
    char text[] = "filename.txt";
    if(starts_with(text, "file")) printf("Starts with 'file'\n");
    if(ends_with(text, ".txt")) printf("Ends with '.txt'\n");
    return 0;
}
