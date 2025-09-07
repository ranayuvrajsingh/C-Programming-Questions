#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to add a new node at the end of the list
void addAtEnd(Node **head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) { printf("Memory allocation failed\n"); return; }
    
    Node *last = *head_ref;
    
    new_node->data = new_data;
    new_node->next = NULL;

    // If the Linked List is empty, then make the new node as head
    if (*head_ref == NULL) {
       *head_ref = new_node;
       return;
    }

    // Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }
    
    // Change the next of last node
    last->next = new_node;
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
    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);
    
    printf("Linked list after adding nodes at the end:\n");
    printList(head);
    
    return 0;
}
