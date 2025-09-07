#include <stdio.h>
int main() {
    char str[200], sub[200];
    int pos, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter start position: "); scanf("%d", &pos);
    printf("Enter length: "); scanf("%d", &len);
    int c = 0;
    while (c < len) {
        sub[c] = str[pos + c - 1];
        c++;
    }
    sub[c] = '\0';
    printf("Substring is: \"%s\"\n", sub);
    return 0;
}
