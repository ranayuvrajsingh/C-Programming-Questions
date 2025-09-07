#include <stdio.h>
#include <string.h>
int main() {
    char text[] = "standard library";
    printf("Length of '%s' is %zu\n", text, strlen(text));
    return 0;
}
