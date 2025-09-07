#include <stdio.h>
#include <string.h>

// Define the structure for an Employee
typedef struct Employee {
    char firstname[50];
    char lastname[50];
    char city[50];
    char state[3]; // 2 letters + null terminator
    int emp_num;
    struct Employee *next;
} Employee;

int main() {
    Employee emp;
    emp.emp_num = 101;
    strcpy(emp.firstname, "John");
    strcpy(emp.lastname, "Doe");

    printf("Employee Structure Defined.\n");
    printf("Employee Num: %d\n", emp.emp_num);
    printf("Name: %s %s\n", emp.firstname, emp.lastname);
    printf("Size of Employee struct: %zu bytes\n", sizeof(Employee));
    
    return 0;
}
