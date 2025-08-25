#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the circular list
struct Node* insertAtEnd(struct Node* last, int data) {
    struct Node* newNode = createNode(data);
    
    // If the list is empty
    if (last == NULL) {
        newNode->next = newNode; // Point to itself
        last = newNode;
        return last;
    }
    
    // Insert after last and update links
    newNode->next = last->next;
    last->next = newNode;
    last = newNode; // Update last to the new node
    
    return last;
}

// Function to insert a node at the beginning
struct Node* insertAtBeginning(struct Node* last, int data) {
    struct Node* newNode = createNode(data);
    
    // If list is empty
    if (last == NULL) {
        newNode->next = newNode;
        last = newNode;
        return last;
    }
    
    // Insert after last (which is the beginning)
    newNode->next = last->next;
    last->next = newNode;
    
    return last; // Last remains the same
}

// Function to print the circular list
void printList(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = last->next; // Start from first node
    
    printf("Circular List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next); // Stop when we come back to start
    
    printf("(back to first)\n");
}

// Function to print the list with arrow visualization
void printListWithArrows(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = last->next;
    struct Node* first = temp;
    
    printf("Circular List: ");
    do {
        printf("%d", temp->data);
        if (temp->next != first) {
            printf(" → ");
        }
        temp = temp->next;
    } while (temp != first);
    
    printf(" → (back to first)\n");
}

int main() {
    struct Node* last = NULL; // In circular list, we maintain pointer to last node
    
    // Create a circular linked list
    printf("Creating circular linked list:\n");
    
    // Insert nodes at end
    last = insertAtEnd(last, 10);
    last = insertAtEnd(last, 20);
    last = insertAtEnd(last, 30);
    
    printListWithArrows(last);
    
    // Insert at beginning
    printf("\nInserting 5 at beginning:\n");
    last = insertAtBeginning(last, 5);
    printListWithArrows(last);
    
    // Insert more nodes
    printf("\nInserting 40 at end:\n");
    last = insertAtEnd(last, 40);
    printListWithArrows(last);
    
    // Print the list in simple format
    printf("\nFinal list: ");
    printList(last);
    
    return 0;
}
