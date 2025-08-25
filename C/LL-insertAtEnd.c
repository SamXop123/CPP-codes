#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the end (returns the head)
struct Node* insertAtEnd(struct Node* head, int new_data) {
    // Create new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if memory allocation was successful
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    
    // Initialize new node
    new_node->data = new_data;
    new_node->next = NULL;
    
    // If the linked list is empty, new node becomes the head
    if (head == NULL) {
        return new_node;
    }
    
    // Traverse to the last node
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Add new node at the end
    current->next = new_node;
    
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    
    printf("Linked list after insertion: ");
    printList(head);
    
    // Insert more elements
    head = insertAtEnd(head, 50);
    head = insertAtEnd(head, 60);
    
    printf("Linked list after more insertions: ");
    printList(head);
    
    return 0;
}
