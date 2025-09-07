#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    int len = strlen(str);
    printf("Reversed characters: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}
