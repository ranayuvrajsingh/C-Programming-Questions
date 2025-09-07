#include <stdio.h>
#include <string.h>
int main() {
    char str[200], smallest[50], largest[50], word[50];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // remove newline
    char *token = strtok(str, " ");
    strcpy(smallest, token);
    strcpy(largest, token);
    while(token != NULL) {
        if(strlen(token) < strlen(smallest)) strcpy(smallest, token);
        if(strlen(token) > strlen(largest)) strcpy(largest, token);
        token = strtok(NULL, " ");
    }
    printf("Smallest: %s, Largest: %s\n", smallest, largest);
    return 0;
}
