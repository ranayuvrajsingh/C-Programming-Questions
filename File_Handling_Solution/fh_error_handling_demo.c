#include <stdio.h>
#include <errno.h>
#include <string.h>
int main() {
    FILE *file = fopen("/root/no_access.txt", "r");
    if(file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return 1;
    }
    fclose(file);
    return 0;
}
