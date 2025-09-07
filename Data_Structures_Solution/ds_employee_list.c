#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Employee Structure Definition ---
typedef struct Employee {
    int emp_num;
    char firstname[50];
    char lastname[50];
    char city[50];
    char state[3];
    struct Employee *next;
} Employee;

// --- Helper Functions ---
Employee* createEmployee(int num, const char* first, const char* last, const char* city, const char* st) {
    Employee* newEmp = (Employee*)malloc(sizeof(Employee));
    if (!newEmp) { return NULL; }
    newEmp->emp_num = num;
    strcpy(newEmp->firstname, first);
    strcpy(newEmp->lastname, last);
    strcpy(newEmp->city, city);
    strcpy(newEmp->state, st);
    newEmp->next = NULL;
    return newEmp;
}

void addEmployee(Employee** head, Employee* newEmp) {
    newEmp->next = *head;
    *head = newEmp;
}

void displayEmployees(Employee* head) {
    printf("--- Employee List ---\n");
    Employee* temp = head;
    while(temp != NULL) {
        printf("ID: %d | Name: %s %s | Location: %s, %s\n", 
               temp->emp_num, temp->firstname, temp->lastname, temp->city, temp->state);
        temp = temp->next;
    }
    printf("---------------------\n");
}

// --- Main Function ---
int main() {
    Employee* head = NULL;
    addEmployee(&head, createEmployee(101, "John", "Doe", "New York", "NY"));
    addEmployee(&head, createEmployee(102, "Jane", "Smith", "Los Angeles", "CA"));
    
    displayEmployees(head);
    
    // Free memory (important but omitted in other examples for brevity)
    Employee* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
