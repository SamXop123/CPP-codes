#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the end
struct Node* insertAtEnd(struct Node* head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL) {
        return new_node;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

// Function to delete the first node
struct Node* deleteFirstNode(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete first node.\n");
        return head;
    }
    
    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("Deleted first node.\n");
    return head;
}

// Function to delete the last node
struct Node* deleteLastNode(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete last node.\n");
        return head;
    }
    
    if (head->next == NULL) {
        free(head);
        printf("Deleted last node (only node).\n");
        return NULL;
    }
    
    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    
    free(current->next);
    current->next = NULL;
    printf("Deleted last node.\n");
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
    
    // Delete first node
    head = deleteFirstNode(head);
    printf("After deleting first node: ");
    printList(head);
    
    // Delete last node
    head = deleteLastNode(head);
    printf("After deleting last node: ");
    printList(head);
    
    return 0;
}
