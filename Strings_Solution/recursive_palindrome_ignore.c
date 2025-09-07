#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_pal_ignore(char *s, int b, int e){
    if(b>=e)return 1;
    if(!isalpha(s[b]))return is_pal_ignore(s,b+1,e);
    if(!isalpha(s[e]))return is_pal_ignore(s,b,e-1);
    if(tolower(s[b])!=tolower(s[e]))return 0;
    return is_pal_ignore(s,b+1,e-1);
}
int main() {
    char str[]="A man, a plan, a canal: Panama";
    if(is_pal_ignore(str, 0, strlen(str)-1)) printf("Palindrome.\n");
    return 0;
}
