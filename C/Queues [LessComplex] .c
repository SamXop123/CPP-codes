#include <stdio.h>

#define MAX_SIZE 5

// Global queue variables
int queue[MAX_SIZE];
int rear = -1;

// Check if queue is empty
int isEmpty() {
    return rear == -1;
}

// Check if queue is full
int isFull() {
    return rear == MAX_SIZE - 1;
}

// Add element to queue
void addElement(int data) {
    if (isFull()) {
        printf("The Queue is full!\n");
        return;
    }
    
    rear++;
    queue[rear] = data;
    printf("Added %d to queue\n", data);
}

// Remove element from queue
int removeElement() {
    if (isEmpty()) {
        printf("Empty queue\n");
        return -1;
    }
    
    int front = queue[0];
    
    // Shift all elements to the left
    for (int i = 0; i < rear; i++) {
        queue[i] = queue[i + 1];
    }
    
    rear--;
    return front;
}

// Peek at front element
int peek() {
    if (isEmpty()) {
        printf("Empty queue\n");
        return -1;
    }
    return queue[0];
}

// Display queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements: ");
    for (int i = 0; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    addElement(1);
    addElement(2);
    addElement(3);
    addElement(4);
    addElement(5);
    
    // Try to add when full
    addElement(6);
    
    printf("\nCurrent queue: ");
    display();
    
    printf("\nProcessing queue:\n");
    while (!isEmpty()) {
        printf("Peek: %d\n", peek());
        printf("Removed: %d\n", removeElement());
    }
    
    // Try to remove when empty
    removeElement();
    
    return 0;
}
