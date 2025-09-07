#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node { int data; struct Node *next; } Node;

void findMinMax(Node *head, int *min, int *max) {
    if (head == NULL) { *min = 0; *max = 0; return; }
    *min = INT_MAX;
    *max = INT_MIN;
    Node *current = head;
    while (current != NULL) {
        if (current->data < *min) *min = current->data;
        if (current->data > *max) *max = current->data;
        current = current->next;
    }
}

// Helper to create list
void addNode(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data; new_node->next = *head; *head = new_node;
}

int main() {
    Node *head = NULL;
    addNode(&head, 50); addNode(&head, 100); addNode(&head, 20); addNode(&head, 80);
    int min_val, max_val;
    findMinMax(head, &min_val, &max_val);
    printf("Minimum value: %d\n", min_val);
    printf("Maximum value: %d\n", max_val);
    return 0;
}
