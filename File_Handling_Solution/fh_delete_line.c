#include <stdio.h>
#include <string.h>
int main() {
    FILE *original, *temp;
    char buffer[256];
    int delete_line = 3, current_line = 1;

    original = fopen("source.txt", "w");
    if(original){ fprintf(original, "Line 1\nLine 2\nLine 3 to delete\nLine 4\n"); fclose(original); }

    original = fopen("source.txt", "r");
    temp = fopen("temp.txt", "w");
    if (!original || !temp) { printf("Error opening files.\n"); return 1; }

    while (fgets(buffer, sizeof(buffer), original) != NULL) {
        if (current_line != delete_line) {
            fputs(buffer, temp);
        }
        current_line++;
    }
    fclose(original);
    fclose(temp);
    remove("source.txt");
    rename("temp.txt", "source.txt");
    printf("Line %d deleted.\n", delete_line);
    return 0;
}
