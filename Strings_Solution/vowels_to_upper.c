#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (strchr("aeiou", str[i])) str[i] = toupper(str[i]);
    }
    printf("Updated: %s", str);
    return 0;
}
