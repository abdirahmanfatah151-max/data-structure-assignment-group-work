/*
Binary Tree Example
Real-life applications:
- File system hierarchy (folders and files)
- HTML/XML DOM parsing in browsers
Reason: Trees store hierarchical data, fast search if balanced
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void printTree(struct Node* root) {
    if(root != NULL) {
        printf("%d ", root->data);
        printTree(root->left);
        printTree(root->right);
    }
}

int main() {
    struct Node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);

    printf("Binary Tree (Preorder): ");
    printTree(root);
    printf("\n");

    return 0;
}

