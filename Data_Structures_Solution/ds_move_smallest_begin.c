#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node { int data; struct Node *next; } Node;

void moveSmallestToBegin(Node **head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) return;
    Node *min_node = *head_ref, *prev_min = NULL, *current = *head_ref, *prev = NULL;
    int min_val = INT_MAX;
    
    while (current != NULL) {
        if (current->data < min_val) {
            min_val = current->data;
            min_node = current;
            prev_min = prev;
        }
        prev = current;
        current = current->next;
    }

    if (prev_min == NULL) return; // Smallest is already at head
    
    prev_min->next = min_node->next; // Detach
    min_node->next = *head_ref;      // Link to front
    *head_ref = min_node;            // Update head
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 40); addNode(&head, 10); addNode(&head, 30); addNode(&head, 20);
    printf("Original: "); printList(head);
    moveSmallestToBegin(&head);
    printf("Smallest moved to beginning: "); printList(head);
    return 0;
}
