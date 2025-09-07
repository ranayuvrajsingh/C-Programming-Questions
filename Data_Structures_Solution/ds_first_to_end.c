#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

void moveFirstToEnd(Node **head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) return;
    Node *first = *head_ref;
    Node *last = *head_ref;
    
    *head_ref = first->next; // Move head to the second node
    
    while(last->next != NULL) {
        last = last->next;
    }
    
    last->next = first; // Attach old first node to the end
    first->next = NULL;
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 40); addNode(&head, 30); addNode(&head, 20); addNode(&head, 10);
    printf("Original: "); printList(head);
    moveFirstToEnd(&head);
    printf("First moved to end: "); printList(head);
    return 0;
}
