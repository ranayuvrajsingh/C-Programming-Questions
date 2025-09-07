#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100] = "  both sides  ";
    int start = 0, end = strlen(str) - 1;
    while(isspace(str[start])) start++;
    while(end >= start && isspace(str[end])) end--;
    memmove(str, str + start, end - start + 1);
    str[end - start + 1] = '\0';
    printf("Trimmed: \"%s\"\n", str);
    return 0;
}
