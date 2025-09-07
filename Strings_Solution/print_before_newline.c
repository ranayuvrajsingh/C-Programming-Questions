#include <stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] && str[i] != '\n'; i++) printf("%c", str[i]);
    printf("\n");
    return 0;
}
