#include <stdio.h>
#include <ctype.h>
int main() {
    // Same as toggle_case
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) str[i] = tolower(str[i]);
        else if (islower(str[i])) str[i] = toupper(str[i]);
    }
    printf("Modified: %s", str);
    return 0;
}
