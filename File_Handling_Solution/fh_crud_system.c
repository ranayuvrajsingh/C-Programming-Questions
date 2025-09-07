#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* DB_FILE = "employee_db.dat";
typedef struct { int id; char name[50]; float salary; } Employee;
void add_employee() {
    FILE *db = fopen(DB_FILE, "ab");
    if (!db) { perror("DB error"); return; }
    Employee emp;
    printf("ID: "); scanf("%d", &emp.id);
    printf("Name: "); scanf(" %[^\n]s", emp.name);
    printf("Salary: "); scanf("%f", &emp.salary);
    fwrite(&emp, sizeof(Employee), 1, db);
    fclose(db);
    printf("Employee added.\n");
}
void view_employees() {
    FILE *db = fopen(DB_FILE, "rb");
    if (!db) { perror("DB error"); return; }
    Employee emp;
    while(fread(&emp, sizeof(Employee), 1, db)) {
        printf("ID: %d\t Name: %s\t Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(db);
}
int main() {
    int choice;
    do {
        printf("\n1. Add\n2. View\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        if(choice==1) add_employee();
        if(choice==2) view_employees();
    } while (choice != 0);
    return 0;
}
