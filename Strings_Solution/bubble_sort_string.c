#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string to sort: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j+1]) {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
    return 0;
}
