#include <stdio.h>
#include <string.h>
typedef struct { int id; char name[20]; float salary; } Employee;
int main() {
    FILE *file = fopen("emps.dat", "wb");
    if(!file) return 1;
    Employee emps[] = {{1,"A",50000},{2,"B",60000},{3,"C",70000}};
    fwrite(emps, sizeof(Employee), 3, file);
    fclose(file);

    file = fopen("emps.dat", "r+b");
    if(!file) return 1;
    int update_id = 2;
    Employee emp;
    while(fread(&emp, sizeof(Employee), 1, file)){
        if(emp.id == update_id){
            emp.salary = 65000.0;
            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);
            break;
        }
    }
    fclose(file);
    printf("Employee %d updated.\n", update_id);
    return 0;
}
