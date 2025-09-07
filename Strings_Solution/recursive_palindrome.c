#include <stdio.h>
#include <string.h>
int is_pal(char *s, int b, int e){
    if(b>=e)return 1;
    if(s[b]!=s[e])return 0;
    return is_pal(s,b+1,e-1);
}
int main() {
    char str[]="madam";
    if(is_pal(str, 0, strlen(str)-1)) printf("Palindrome.\n");
    else printf("Not a palindrome.\n");
    return 0;
}
