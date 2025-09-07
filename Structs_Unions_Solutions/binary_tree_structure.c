#include <stdio.h>
#include <stdlib.h>
// Self-referential structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};
int main() {
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(!root) return 1;

    root->data = 50;
    root->left = NULL;
    root->right = NULL;
    printf("A binary tree node is defined.\n");
    printf("Root node data: %d\n", root->data);
    free(root);
    return 0;
}
