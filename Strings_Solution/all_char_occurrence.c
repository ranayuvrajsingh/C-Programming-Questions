#include <stdio.h>
int main() {
    char str[100], ch;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter char to find: ");
    scanf(" %c", &ch);
    printf("Found at indices: ");
    for(int i=0; str[i]; i++) {
        if(str[i] == ch) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
