#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 5
#define MAX_LEN 50
int main() {
    char strings[MAX_STRINGS][MAX_LEN], temp[MAX_LEN];
    printf("Enter %d strings:\n", MAX_STRINGS);
    for (int i = 0; i < MAX_STRINGS; i++) {
        fgets(strings[i], MAX_LEN, stdin);
        strings[i][strcspn(strings[i], "\n")] = 0;
    }
    for (int i = 0; i < MAX_STRINGS - 1; i++) {
        for (int j = i + 1; j < MAX_STRINGS; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
    printf("\nSorted strings:\n");
    for (int i = 0; i < MAX_STRINGS; i++) printf("%s\n", strings[i]);
    return 0;
}
