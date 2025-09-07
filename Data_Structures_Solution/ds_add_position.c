#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to add a new node at a given position
void addAtPosition(Node **head_ref, int new_data, int position) {
    if (position < 1) {
        printf("Position should be >= 1.\n");
        return;
    }
    if (position == 1) {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = new_data;
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }
    
    Node* temp = *head_ref;
    for(int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position is greater than the number of nodes.\n");
        return;
    }
    
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = temp->next;
    temp->next = new_node;
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
    // Create list: 10 -> 20 -> 40
    addAtPosition(&head, 10, 1);
    addAtPosition(&head, 20, 2);
    addAtPosition(&head, 40, 3);
    
    printf("Original List:\n");
    printList(head);
    
    // Add 30 at position 3
    addAtPosition(&head, 30, 3);
    
    printf("\nList after adding 30 at position 3:\n");
    printList(head);
    
    return 0;
}
