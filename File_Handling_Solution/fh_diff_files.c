#include <stdio.h>
#include <string.h>
int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    if (!f1 || !f2) return 1;
    char line1[256], line2[256];
    int line_num = 1;
    while(fgets(line1, sizeof(line1), f1) && fgets(line2, sizeof(line2), f2)) {
        if(strcmp(line1, line2) != 0) {
            printf("Files differ at line %d\n", line_num);
            break;
        }
        line_num++;
    }
    fclose(f1); fclose(f2);
    return 0;
}
