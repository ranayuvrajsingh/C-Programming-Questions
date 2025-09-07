#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int alphas = 0, digits = 0, specials = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) alphas++;
        else if (isdigit(str[i])) digits++;
        else if (!isspace(str[i]) && str[i] != '\n') specials++;
    }
    printf("Alphabets=%d, Digits=%d, Specials=%d\n", alphas, digits, specials);
    return 0;
}
