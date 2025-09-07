#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    char *token = strtok(str, " \n");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, " \n");
    }
    return 0;
}
