#include <stdio.h>
#include <string.h>
typedef struct { int id; char name[20]; } Record;
int main() {
    FILE *file = fopen("records.dat", "wb");
    if(!file) return 1;
    Record records[] = {{1,"A"},{2,"B"},{3,"C"},{4,"D"}};
    fwrite(records, sizeof(Record), 4, file);
    fclose(file);
    
    file = fopen("records.dat", "rb");
    if(!file) return 1;
    Record rec_read;
    int record_num = 3;
    fseek(file, (record_num - 1) * sizeof(Record), SEEK_SET);
    fread(&rec_read, sizeof(Record), 1, file);
    printf("Read record %d: ID=%d, Name=%s\n", record_num, rec_read.id, rec_read.name);
    fclose(file);
    return 0;
}
