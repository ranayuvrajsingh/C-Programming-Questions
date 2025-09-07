#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

void moveLastToBegin(Node **head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) return;
    Node *second_last = NULL;
    Node *last = *head_ref;
    
    while(last->next != NULL) {
        second_last = last;
        last = last->next;
    }
    
    second_last->next = NULL; // Detach last node
    last->next = *head_ref;   // Link it to the front
    *head_ref = last;         // Update head
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 40); addNode(&head, 30); addNode(&head, 20); addNode(&head, 10);
    printf("Original: "); printList(head);
    moveLastToBegin(&head);
    printf("Last moved to beginning: "); printList(head);
    return 0;
}
