#include <stdio.h>
#include <ctype.h>
int main() {
    // Same as to_lowercase
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i]; i++) str[i] = tolower(str[i]);
    printf("Result: %s", str);
    return 0;
}
