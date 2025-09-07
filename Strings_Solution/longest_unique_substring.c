#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int n = strlen(str), max_len = 0;
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)str[j]]) break;
            visited[(unsigned char)str[j]] = 1;
            int current_len = j - i + 1;
            if (current_len > max_len) max_len = current_len;
        }
    }
    printf("Longest unique substring length: %d\n", max_len);
    return 0;
}
