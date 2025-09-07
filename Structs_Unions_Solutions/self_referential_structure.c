#include <stdio.h>

// A self-referential structure contains a pointer to a structure of the same type.
// This is the fundamental concept for creating linked lists, trees, etc.
struct Node {
    int data;
    struct Node *next; // Pointer to the next node in the list
};

int main() {
    struct Node node1, node2;

    node1.data = 10;
    node1.next = &node2; // node1 points to node2

    node2.data = 20;
    node2.next = NULL;   // The end of the list

    printf("Data in node1: %d\n", node1.data);
    printf("Data in the node after node1: %d\n", node1.next->data);

    return 0;
}
