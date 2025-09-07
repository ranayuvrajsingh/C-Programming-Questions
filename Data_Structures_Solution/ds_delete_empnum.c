#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee { int emp_num; char name[50]; struct Employee *next; } Employee;

// Helper to create and add nodes
void add(Employee** h, int id, const char* name) { 
    Employee* e=(Employee*)malloc(sizeof(Employee));
    e->emp_num=id; strcpy(e->name,name); e->next=*h; *h=e;
}
void display(Employee* h) { while(h){ printf("ID:%d Name:%s\n", h->emp_num, h->name); h=h->next; } }

// Function to delete an employee by their number
void deleteByEmpNum(Employee **head, int key) {
    Employee *temp = *head, *prev = NULL;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->emp_num == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->emp_num != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) {
        printf("Employee with ID %d not found.\n", key);
        return;
    }

    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp);
}

int main() {
    Employee* head = NULL;
    add(&head, 103, "Charlie");
    add(&head, 102, "Bob");
    add(&head, 101, "Alice");
    
    printf("Original List:\n");
    display(head);

    deleteByEmpNum(&head, 102);
    
    printf("\nList after deleting employee 102:\n");
    display(head);
    
    return 0;
}
