#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    printf("Enter string: "); fgets(str, sizeof(str), stdin);
    printf("Enter char to remove: "); scanf(" %c", &ch);
    char *pos = strchr(str, ch);
    if(pos) {
        memmove(pos, pos + 1, strlen(pos));
        printf("Result: %s", str);
    } else {
        printf("Char not found.\n");
    }
    return 0;
}
