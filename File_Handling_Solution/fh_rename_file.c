#include <stdio.h>
int main() {
    FILE *fp = fopen("old_name.txt", "w");
    if (fp) { fclose(fp); }
    if (rename("old_name.txt", "new_name.txt") == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
    }
    return 0;
}
