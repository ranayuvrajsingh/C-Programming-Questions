#include <stdio.h>
int main() {
    FILE *file = fopen("formatted.txt", "w");
    if(!file) return 1;
    char *name = "Bob";
    int age = 42;
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    printf("Formatted data written to file.\n");
    return 0;
}
