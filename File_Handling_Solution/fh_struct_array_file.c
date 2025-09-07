#include <stdio.h>
typedef struct { int id; char name[20]; } Product;
int main() {
    Product products_out[3] = {{10, "A"}, {20, "B"}, {30, "C"}};
    Product products_in[3];
    FILE *file = fopen("products.dat", "wb");
    if(!file) return 1;
    fwrite(products_out, sizeof(Product), 3, file);
    fclose(file);

    file = fopen("products.dat", "rb");
    if(!file) return 1;
    fread(products_in, sizeof(Product), 3, file);
    fclose(file);

    for(int i=0; i<3; i++) printf("ID: %d, Name: %s\n", products_in[i].id, products_in[i].name);
    return 0;
}
