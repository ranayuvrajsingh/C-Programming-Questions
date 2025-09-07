#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (ispunct(str[i])) count++;
    }
    printf("Punctuation count: %d\n", count);
    return 0;
}
