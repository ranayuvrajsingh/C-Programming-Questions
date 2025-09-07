#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if (file == NULL) {
        printf("Error: Please create 'source.txt' with some text.\n");
        return 1;
    }
    char ch;
    int words = 0, in_word = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch) || ispunct(ch)) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }
    printf("Number of words in the file: %d\n", words);
    fclose(file);
    return 0;
}
