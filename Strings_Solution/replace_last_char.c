#include <stdio.h>
#include <string.h>
int main() {
    char str[100], find, replace;
    printf("Enter string: "); fgets(str, sizeof(str), stdin);
    printf("Char to find: "); scanf(" %c", &find);
    printf("Char to replace with: "); scanf(" %c", &replace);
    char *pos = strrchr(str, find);
    if(pos) *pos = replace;
    printf("Result: %s", str);
    return 0;
}
