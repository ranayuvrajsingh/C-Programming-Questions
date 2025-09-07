#include <stdio.h>
#include <string.h>
int main() {
    FILE *original = fopen("source.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!original || !temp) { return 1; }
    char buffer[256];
    int line_to_replace = 2;
    const char *new_content = "This is the new second line.\n";
    int current_line = 1;
    while(fgets(buffer, sizeof(buffer), original)) {
        if(current_line == line_to_replace) fputs(new_content, temp);
        else fputs(buffer, temp);
        current_line++;
    }
    fclose(original); fclose(temp);
    remove("source.txt");
    rename("temp.txt", "source.txt");
    printf("Line %d replaced.\n", line_to_replace);
    return 0;
}
