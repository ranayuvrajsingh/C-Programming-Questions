#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    // Same as trim_both
    char str[] = "  blanks  ";
    int s=0, e=strlen(str)-1;
    while(isspace(str[s])) s++;
    while(e>=s && isspace(str[e])) e--;
    memmove(str, str+s, e-s+1);
    str[e-s+1]=0;
    printf("Result: \"%s\"\n", str);
    return 0;
}
