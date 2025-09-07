#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) str[i] = tolower(str[i]);
    char *token = strtok(str, " \t\n.,;");
    while (token != NULL) {
        if (strcmp(token, "the") == 0) {
            count++;
        }
        token = strtok(NULL, " \t\n.,;");
    }
    printf("The word 'the' appears %d times.\n", count);
    return 0;
}
