#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to delete the first node of a linked list
void deleteAtBeginning(Node **head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    Node *temp = *head_ref; // Store head
    *head_ref = temp->next; // Change head
    free(temp);             // Free old head
}

// Helper to create list
void addNode(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
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
    addNode(&head, 30);
    addNode(&head, 20);
    addNode(&head, 10);
    
    printf("Original List:\n");
    printList(head);
    
    deleteAtBeginning(&head);
    
    printf("\nList after deleting from beginning:\n");
    printList(head);
    
    return 0;
}
