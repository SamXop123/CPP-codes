#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    
    return root;
}

// In-order traversal (left, root, right)
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Pre-order traversal (root, left, right)
void preOrder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Post-order traversal (left, right, root)
void postOrder(struct Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

// Search for a value in BST
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }
    
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Find the minimum value node (leftmost node)
struct Node* findMin(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Delete a node from BST
struct Node* deleteNode(struct Node* root, int value) {
    if (root == NULL) {
        return root;
    }
    
    // Find the node to be deleted
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node found - handle different cases
        
        // Case 1: No child or one child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        
        // Case 2: Two children - find inorder successor
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Free the entire tree
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

// Main function with example usage
int main() {
    struct Node* root = NULL;
    
    // Insert nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    
    printf("BST created with values: 50, 30, 20, 40, 70, 60, 80\n\n");
    
    // Traversals
    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");
    
    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");
    
    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n\n");
    
    // Search examples
    int searchValue = 40;
    struct Node* found = search(root, searchValue);
    if (found != NULL) {
        printf("Value %d found in BST\n", searchValue);
    } else {
        printf("Value %d not found in BST\n", searchValue);
    }
    
    searchValue = 90;
    found = search(root, searchValue);
    if (found != NULL) {
        printf("Value %d found in BST\n", searchValue);
    } else {
        printf("Value %d not found in BST\n", searchValue);
    }
    printf("\n");
    
    // Delete examples
    printf("Deleting 20 (leaf node)...\n");
    root = deleteNode(root, 20);
    printf("In-order after deletion: ");
    inOrder(root);
    printf("\n");
    
    printf("Deleting 30 (node with one child)...\n");
    root = deleteNode(root, 30);
    printf("In-order after deletion: ");
    inOrder(root);
    printf("\n");
    
    printf("Deleting 50 (node with two children)...\n");
    root = deleteNode(root, 50);
    printf("In-order after deletion: ");
    inOrder(root);
    printf("\n");
    
    // Free memory
    freeTree(root);
    
    return 0;
}
