#include <stdio.h>
int main() {
    FILE *file = fopen("numbers.txt", "w");
    if(file) { fprintf(file, "10 20 30 40 50"); fclose(file); }
    file = fopen("numbers.txt", "r");
    if (!file) { return 1; }
    int num, sum = 0;
    while(fscanf(file, "%d", &num) == 1) {
        sum += num;
    }
    fclose(file);
    printf("Sum is: %d\n", sum);
    return 0;
}
