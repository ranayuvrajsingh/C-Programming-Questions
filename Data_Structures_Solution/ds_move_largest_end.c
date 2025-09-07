#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node { int data; struct Node *next; } Node;

void moveLargestToEnd(Node **head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) return;
    Node *max_node = *head_ref, *prev_max = NULL, *current = *head_ref, *prev = NULL;
    int max_val = INT_MIN;

    // Find the max node and its predecessor
    while (current != NULL) {
        if (current->data > max_val) {
            max_val = current->data;
            max_node = current;
            prev_max = prev;
        }
        prev = current;
        current = current->next;
    }
    
    // If max is already at the end, do nothing
    if (max_node->next == NULL) return;

    // Detach max node
    if (prev_max != NULL) {
        prev_max->next = max_node->next;
    } else { // Max is the head node
        *head_ref = max_node->next;
    }

    // Move to end
    current = *head_ref;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = max_node;
    max_node->next = NULL;
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 10); addNode(&head, 50); addNode(&head, 20); addNode(&head, 30);
    printf("Original: "); printList(head);
    moveLargestToEnd(&head);
    printf("Largest moved to end: "); printList(head);
    return 0;
}
