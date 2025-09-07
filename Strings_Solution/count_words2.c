#include <stdio.h>
int main() {
    // Same as count_words
    char str[200];
    int count = 1;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if (str[i] == ' ' || str[i] == '\t') count++;
    }
    printf("Total words: %d\n", count);
    return 0;
}
