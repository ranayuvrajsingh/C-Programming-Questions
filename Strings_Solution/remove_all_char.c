#include <stdio.h>
int main() {
    char str[100], ch, result[100];
    int j = 0;
    printf("Enter string: "); fgets(str, sizeof(str), stdin);
    printf("Enter char to remove: "); scanf(" %c", &ch);
    for(int i=0; str[i]; i++) {
        if(str[i] != ch) result[j++] = str[i];
    }
    result[j] = '\0';
    printf("Result: %s", result);
    return 0;
}
