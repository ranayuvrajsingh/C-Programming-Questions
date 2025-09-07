#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to delete a node at a given position
void deleteAtPosition(Node **head_ref, int position) {
    if (*head_ref == NULL) return;
    Node* temp = *head_ref;

    if (position == 1) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    for (int i=1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds.\n");
        return;
    }
    
    Node *next_node = temp->next->next;
    free(temp->next);
    temp->next = next_node;
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
    addNode(&head, 40);
    addNode(&head, 30);
    addNode(&head, 20);
    addNode(&head, 10);

    printf("Original List:\n");
    printList(head);
    
    deleteAtPosition(&head, 3);
    
    printf("\nList after deleting node at position 3:\n");
    printList(head);
    
    return 0;
}
