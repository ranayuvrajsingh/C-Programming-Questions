#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200], result[200];
    int j = 0;
    printf("Enter a mixed string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("Alphabets only: %s\n", result);
    return 0;
}
