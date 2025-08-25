#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int new_data) {
    // Create new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if memory allocation was successful
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    
    // Initialize new node
    new_node->data = new_data;
    new_node->next = head;  // Point new node to current head
    
    // New node becomes the new head
    return new_node;
}

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
    
    // Insert elements at the beginning
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 40);
    
    printf("Linked list after insertion at beginning: ");
    printList(head);
    
    // Insert more elements
    head = insertAtBeginning(head, 50);
    head = insertAtBeginning(head, 60);
    
    printf("Linked list after more insertions: ");
    printList(head);
    
    return 0;
}
