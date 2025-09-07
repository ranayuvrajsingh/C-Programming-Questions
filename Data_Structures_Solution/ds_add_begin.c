#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to add a new node at the beginning of the list
void addAtBeginning(Node **head_ref, int new_data) {
    // 1. Allocate memory for new node
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) { printf("Memory allocation failed\n"); return; }

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Make next of new node as head
    new_node->next = *head_ref;

    // 4. Move the head to point to the new node
    *head_ref = new_node;
}

void printList(Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    addAtBeginning(&head, 10);
    addAtBeginning(&head, 20);
    addAtBeginning(&head, 30);
    
    printf("Linked list after adding nodes at the beginning:\n");
    printList(head);
    
    return 0;
}
