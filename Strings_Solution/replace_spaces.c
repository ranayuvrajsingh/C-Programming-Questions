#include <stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') str[i] = '_';
    }
    printf("Replaced: %s", str);
    return 0;
}
