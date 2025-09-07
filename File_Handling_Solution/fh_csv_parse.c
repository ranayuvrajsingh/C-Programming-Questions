#include <stdio.h>
#include <string.h>
int main() {
    FILE *file = fopen("data.csv", "w");
    if(file){ fprintf(file, "Name,Age,City\nAlice,30,New York\nBob,25,Chicago"); fclose(file); }

    file = fopen("data.csv", "r");
    if(!file) return 1;
    char line[100];
    fgets(line, sizeof(line), file); // skip header
    while(fgets(line, sizeof(line), file)) {
        char *token = strtok(line, ",");
        printf("Name: %s, ", token);
        token = strtok(NULL, ",");
        printf("Age: %s, ", token);
        token = strtok(NULL, ",\n");
        printf("City: %s\n", token);
    }
    fclose(file);
    return 0;
}
