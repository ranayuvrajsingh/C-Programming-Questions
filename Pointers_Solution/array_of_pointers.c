#include <stdio.h>
int main() {
    // An array where each element is a pointer to a character (a string literal)
    char *names[] = {
        "Alice",
        "Bob",
        "Charlie"
    };
    printf("Names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
