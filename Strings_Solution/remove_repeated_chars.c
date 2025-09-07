#include <stdio.h>
int main() {
    char str[100], result[100];
    int seen[256] = {0}, j = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]; i++) {
        if(!seen[(unsigned char)str[i]]) {
            result[j++] = str[i];
            seen[(unsigned char)str[i]] = 1;
        }
    }
    result[j] = '\0';
    printf("Result: %s", result);
    return 0;
}
