#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100] = "   leading spaces";
    int i = 0;
    while(isspace(str[i])) i++;
    memmove(str, str + i, strlen(str) - i + 1);
    printf("Trimmed: \"%s\"\n", str);
    return 0;
}
