#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee { int emp_num; char firstname[50]; struct Employee *next; } Employee;

// --- Helper Functions (same as sort_empnum) ---
Employee* create(int n, const char* f) { Employee* e=(Employee*)malloc(sizeof(Employee)); e->emp_num=n; strcpy(e->firstname,f); e->next=NULL; return e;}
void add(Employee** h, Employee* e) { e->next=*h; *h=e; }
void display(Employee* h) { while(h) { printf("ID: %d, Name: %s\n", h->emp_num, h->firstname); h=h->next; } }

// --- Sort Function ---
void sortByFirstName(Employee** head) {
    if (*head == NULL) return;
    int swapped;
    Employee *ptr1;
    Employee *lptr = NULL;

    do {
        swapped = 0;
        ptr1 = *head;
        while(ptr1->next != lptr) {
            // THE ONLY CHANGE IS HERE: Use strcmp for strings
            if(strcmp(ptr1->firstname, ptr1->next->firstname) > 0) {
                int temp_id = ptr1->emp_num;
                char temp_name[50];
                strcpy(temp_name, ptr1->firstname);
                ptr1->emp_num = ptr1->next->emp_num;
                strcpy(ptr1->firstname, ptr1->next->firstname);
                ptr1->next->emp_num = temp_id;
                strcpy(ptr1->next->firstname, temp_name);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while(swapped);
}

int main() {
    Employee* head = NULL;
    add(&head, create(105, "Charlie"));
    add(&head, create(102, "Alice"));
    add(&head, create(108, "Bob"));

    printf("Original List:\n"); display(head);
    sortByFirstName(&head);
    printf("\nSorted by First Name:\n"); display(head);
    return 0;
}
