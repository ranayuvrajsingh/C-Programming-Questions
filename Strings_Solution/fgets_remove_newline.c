#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Without newline: \"%s\"\n", str);
    return 0;
}
