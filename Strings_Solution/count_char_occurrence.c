#include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter char to count: ");
    scanf(" %c", &ch);
    for(int i=0; str[i]; i++) {
        if(str[i] == ch) count++;
    }
    printf("'%c' appears %d times.\n", ch, count);
    return 0;
}
