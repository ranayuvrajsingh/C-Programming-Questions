#include <stdio.h>
#include <string.h>
int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);
    strcpy(dest, src);
    printf("Copied: %s", dest);
    return 0;
}
