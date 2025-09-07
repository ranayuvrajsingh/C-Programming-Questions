#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100] = "trailing spaces   ";
    int i = strlen(str) - 1;
    while(i >= 0 && isspace(str[i])) i--;
    str[i + 1] = '\0';
    printf("Trimmed: \"%s\"\n", str);
    return 0;
}
