#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "World Health Organization";
    printf("Abbreviation: ");
    if (isalpha(str[0])) printf("%c", toupper(str[0]));
    for (int i = 1; str[i]; i++) {
        if (isspace(str[i-1]) && isalpha(str[i])) {
            printf("%c", toupper(str[i]));
        }
    }
    printf("\n");
    return 0;
}
