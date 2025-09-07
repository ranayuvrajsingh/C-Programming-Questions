#include <stdio.h>
int main() {
    FILE *fp = fopen("to_delete.txt", "w");
    if (fp) { fclose(fp); }
    if (remove("to_delete.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        perror("Error deleting file");
    }
    return 0;
}
