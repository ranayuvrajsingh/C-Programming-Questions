#include <stdio.h>
typedef struct { int id; char data[16]; } Item;
int main() {
    FILE *file = fopen("inventory.dat", "wb");
    if(!file) return 1;
    Item item;
    for(int i=0; i<5; i++){
        item.id = i+1;
        sprintf(item.data, "Item-%d", i+1);
        fwrite(&item, sizeof(Item), 1, file);
    }
    fclose(file);
    printf("Created inventory.dat with 5 records.\n");
    return 0;
}
