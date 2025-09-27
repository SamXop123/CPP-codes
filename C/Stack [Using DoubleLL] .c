#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;  // stack top

// Push: insert at the beginning
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    printf("%d pushed onto stack\n", value);
}

// Pop: remove from beginning
int pop() {
    if (head == NULL) {
        printf("Stack underflow! (empty stack)\n");
        return -1;
    }

    struct Node* temp = head;
    int poppedValue = temp->data;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    free(temp);
    printf("%d popped from stack\n", poppedValue);
    return poppedValue;
}

// Peek: get top element
int peek() {
    if (head == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    return head->data;
}

// Check if stack is empty
int isEmpty() {
    return head == NULL;
}

// Display stack
void display() {
    if (head == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("Stack (top -> bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Driver code
int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    printf("Top element is %d\n", peek());

    pop();
    pop();

    display();

    if (isEmpty()) {
        printf("Stack is empty now\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
