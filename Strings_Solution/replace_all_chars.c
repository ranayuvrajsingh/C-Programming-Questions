#include <stdio.h>
int main() {
    char str[100], find, replace;
    printf("Enter string: "); fgets(str, sizeof(str), stdin);
    printf("Char to find: "); scanf(" %c", &find);
    printf("Char to replace with: "); scanf(" %c", &replace);
    for(int i=0; str[i]; i++) {
        if(str[i] == find) str[i] = replace;
    }
    printf("Result: %s", str);
    return 0;
}
