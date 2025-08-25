#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    // 1. Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // 2. Put in the data
    new_node->data = new_data;
    
    // 3. Make next of new node as head and previous as NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    
    // 4. Change prev of head node to new node
    if ((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }
    
    // 5. Move the head to point to the new node
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    
    printf("Doubly linked list after insertion: ");
    printList(head);
    
    return 0;
}
