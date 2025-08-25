#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the end (for building the list)
struct Node* insertAtEnd(struct Node* head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL) {return new_node;}
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}


// Function to insert after a specific data value
struct Node* insertAfterData(struct Node* head, int after_data, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    
    new_node->data = new_data;
    
    // If list is empty
    if (head == NULL) {
        printf("List is empty. Cannot insert after %d.\n", after_data);
        free(new_node);
        return head;
    }
    
    // Search for the node with the given data
    struct Node* current = head;
    while (current != NULL && current->data != after_data) {
        current = current->next;
    }
    
    // If data not found
    if (current == NULL) {
        printf("Data %d not found in the list. Insertion failed.\n", after_data);
        free(new_node);
        return head;
    }
    
    // Insert after the found node
    new_node->next = current->next;
    current->next = new_node;
    
    return head;
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
    
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    
    printf("Original list: ");
    printList(head);
    printf("\n");
    
    // Insert after existing data values
    head = insertAfterData(head, 20, 25);
    printf("After inserting 25 after 20: ");
    printList(head);
    
    // Try to insert after non-existent data
    head = insertAfterData(head, 99, 100);
    printf("After trying to insert 100 after 99: ");
    printList(head);
    
    return 0;
}
