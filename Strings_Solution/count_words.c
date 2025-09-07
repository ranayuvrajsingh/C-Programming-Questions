#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int count = 0, in_word = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }
    printf("Total words: %d\n", count);
    return 0;
}
