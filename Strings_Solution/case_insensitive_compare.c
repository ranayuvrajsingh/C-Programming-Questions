#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[] = "Hello";
    char s2[] = "hello";
    int i = 0;
    while(tolower(s1[i]) == tolower(s2[i]) && s1[i]) i++;
    if(s1[i] == '\0' && s2[i] == '\0') printf("Equal (case-insensitive)\n");
    else printf("Not equal (case-insensitive)\n");
    return 0;
}
