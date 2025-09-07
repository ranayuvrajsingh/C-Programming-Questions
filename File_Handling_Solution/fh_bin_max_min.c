#include <stdio.h>
#include <limits.h>
int main() {
    FILE *file = fopen("intdata.dat", "wb");
    if(!file) return 1;
    int data[] = {10, -5, 100, 50, -20};
    fwrite(data, sizeof(int), 5, file);
    fclose(file);

    file = fopen("intdata.dat", "rb");
    if(!file) return 1;
    int num, min = INT_MAX, max = INT_MIN;
    while(fread(&num, sizeof(int), 1, file)) {
        if(num < min) min = num;
        if(num > max) max = num;
    }
    fclose(file);
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}
