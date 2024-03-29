// Creating and traversing a binary tree
// preorder, inorder, and postorder
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// self-referential structure
struct treeNode {
    int data; // node value
    struct treeNode *leftPtr; // pointer to left subtree
    struct treeNode *rightPtr; // pointer to right subtree
};

typedef struct treeNode TreeNode; // synonym for struct treeNode
typedef TreeNode* TreeNodePtr;  // synonym for TreeNode *

// prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main(void) {
    TreeNodePtr rootPtr = NULL; // tree initially empty
    srand(time(NULL));
    puts("The numbers being placed in the tree are:");

    // insert random values between 0 and 14 in the tree
    for (int i = 1; i <= 10; ++i) {
        int item = rand() % 15;
        printf("%3d", item);
        insertNode(&rootPtr, item);
    }

    // traverse the tree preOrder
    puts("\n\nThe preOrder traversal is:");
    preOrder(rootPtr);

    // traverse the tree inOrder
    puts("\n\nThe inOrder traversal is:");
    inOrder(rootPtr);

    // traverse the tree postOrder
    puts("\n\nThe postOrder traversal is:");
    postOrder(rootPtr);

    return 0;
}

// insert node into tree
void insertNode(TreeNodePtr *treePtr, int value) {
    if (*treePtr == NULL) { // if tree is empty
        *treePtr = malloc(sizeof(TreeNode));
        
        if (*treePtr != NULL) { // if memory was allocated, then assign data
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else {
            printf("%d not inserted. No memory available.\n", value);
        }
    }
    else { // tree is not empty
        if (value < (*treePtr)->data) { // value goes in left subtree
            insertNode(&((*treePtr)->leftPtr), value);
        }
        else if (value > (*treePtr)->data) { // value goes in right subtree
            insertNode(&((*treePtr)->rightPtr), value);
        }
        else { // duplicate data value ignored
            printf("dup");
        }
    }
}

// begin inorder traversal of tree
void inOrder(TreeNodePtr treePtr) {
    // if tree is not empty, then traverse
    if (treePtr != NULL) {
        inOrder(treePtr->leftPtr);
        printf("%3d", treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

// begin preorder traversal of tree
void preOrder(TreeNodePtr treePtr) {
    // if tree is not empty, then traverse
    if (treePtr != NULL) {
        printf("%3d", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

// begin postorder traversal of tree
void postOrder(TreeNodePtr treePtr) {
    // if tree is not empty, then traverse
    if (treePtr != NULL) {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%3d", treePtr->data);
    }
}
