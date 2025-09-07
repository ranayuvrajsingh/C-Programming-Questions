#include <stdio.h>
int main() {
    char source[200], destination[200];
    int i = 0;
    printf("Enter a source string: ");
    fgets(source, sizeof(source), stdin);
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Don't forget the null terminator!
    printf("Source string: %s", source);
    printf("Copied (Destination) string: %s", destination);
    return 0;
}
