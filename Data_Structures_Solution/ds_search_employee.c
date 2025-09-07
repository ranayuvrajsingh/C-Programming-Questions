#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Employee Structure Definition ---
typedef struct Employee {
    int emp_num;
    char firstname[50];
    char lastname[50];
    struct Employee *next;
} Employee;

// --- Helper Functions ---
Employee* createEmployee(int num, const char* first, const char* last) {
    Employee* newEmp = (Employee*)malloc(sizeof(Employee));
    if (!newEmp) { return NULL; }
    newEmp->emp_num = num;
    strcpy(newEmp->firstname, first);
    strcpy(newEmp->lastname, last);
    newEmp->next = NULL;
    return newEmp;
}
void addEmployee(Employee** head, Employee* newEmp) {
    newEmp->next = *head;
    *head = newEmp;
}

// --- Search Function ---
Employee* searchByEmpNum(Employee* head, int emp_num) {
    Employee* current = head;
    while(current != NULL) {
        if (current->emp_num == emp_num) {
            return current; // Found
        }
        current = current->next;
    }
    return NULL; // Not found
}

// --- Main Function ---
int main() {
    Employee* head = NULL;
    addEmployee(&head, createEmployee(101, "John", "Doe"));
    addEmployee(&head, createEmployee(102, "Jane", "Smith"));
    
    int search_id = 101;
    Employee* found = searchByEmpNum(head, search_id);
    
    if (found) {
        printf("Found employee %d: %s %s\n", search_id, found->firstname, found->lastname);
    } else {
        printf("Employee %d not found.\n", search_id);
    }

    return 0;
}
