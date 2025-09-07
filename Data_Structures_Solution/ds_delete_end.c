#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to delete the last node of a linked list
void deleteAtEnd(Node **head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }
    // If only one node
    if ((*head_ref)->next == NULL) {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }
    Node *second_last = *head_ref;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    free(second_last->next);
    second_last->next = NULL;
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
    
    deleteAtEnd(&head);
    
    printf("\nList after deleting from end:\n");
    printList(head);
    
    return 0;
}
