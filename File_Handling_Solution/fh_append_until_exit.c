#include <stdio.h>
#include <string.h>
int main() {
    FILE *file = fopen("user_input.txt", "a");
    if(!file) return 1;
    char buffer[100];
    printf("Enter text to append (type 'exit' to stop):\n");
    while(1) {
        fgets(buffer, sizeof(buffer), stdin);
        if(strncmp(buffer, "exit", 4) == 0) break;
        fputs(buffer, file);
    }
    fclose(file);
    printf("Input saved.\n");
    return 0;
}
