#include <stdio.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if(!file) return 1;
    long count = 0;
    while(fgetc(file) != EOF) count++;
    fclose(file);
    printf("Total characters: %ld\n", count);
    return 0;
}
