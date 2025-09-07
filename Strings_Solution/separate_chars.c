#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The characters are: ");
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}
