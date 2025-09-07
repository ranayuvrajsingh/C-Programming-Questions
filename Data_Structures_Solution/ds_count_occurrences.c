#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

int countOccurrences(Node *head, int key) {
    int count = 0;
    Node *current = head;
    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}

// Helper to create list
void addNode(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data; new_node->next = *head; *head = new_node;
}

int main() {
    Node *head = NULL;
    addNode(&head, 10); addNode(&head, 20); addNode(&head, 10);
    addNode(&head, 30); addNode(&head, 10);
    
    int key = 10;
    printf("The number %d appears %d times.\n", key, countOccurrences(head, key));
    
    return 0;
}
