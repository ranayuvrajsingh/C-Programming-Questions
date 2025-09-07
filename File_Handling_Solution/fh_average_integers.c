#include <stdio.h>
int main() {
    FILE *file = fopen("numbers.txt", "r");
    if(!file) return 1;
    int num, sum = 0, count = 0;
    while(fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(file);
    if(count > 0) printf("Average is: %.2f\n", (float)sum/count);
    return 0;
}
