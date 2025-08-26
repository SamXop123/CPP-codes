#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;  // Global top pointer

// Function to push element into stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed! Stack Overflow\n");
        return;
    }
    
    newNode->data = value;
    newNode->next = top;  // New node points to current top
    top = newNode;        // New node becomes the new top
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop element from stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Cannot pop\n");
    } else {
        struct Node* temp = top;
        int poppedValue = top->data;
        top = top->next;  // Move top to next node
        free(temp);       // Free the memory of popped node
        printf("Popped %d from the stack\n", poppedValue);
    }
}

// Function to display stack elements
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct Node* current = top;
        printf("Stack elements (top to bottom): ");
        while (current != NULL) {
            printf("%d", current->data);
            if (current->next != NULL) {
                printf(" -> ");
            }
            current = current->next;
        }
        printf(" -> NULL\n");
    }
}

// Function to peek at the top element
void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

int isEmpty() {
    return top == NULL;
}


int main() {
    int choice, value;
    
    printf("Linked List Implementation of Stack\n");
    
    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check if empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                peek();
                break;
                
            case 5:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
                
            case 6:
                printf("Exiting program...\n");
                // Free remaining memory before exit
                while (top != NULL) {
                    struct Node* temp = top;
                    top = top->next;
                    free(temp);
                }
                exit(0);
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
