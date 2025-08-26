#include <stdio.h>
#include <stdlib.h>

// Maximum size of queue
#define MAX 5  

int queue[MAX];
int front = -1, rear = -1;

// Function to check if queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if queue is full
int isFull() {
    return (rear + 1) % MAX == front;
}

// Function to enqueue (add) an element
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to dequeue (remove) an element
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
    } else {
        printf("Dequeued %d\n", queue[front]);
        
        if (front == rear) {
            // Queue becomes empty after this dequeue
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Function to display queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        
        if (front <= rear) {
            // Normal case: front <= rear
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        } else {
            // Circular case: rear < front
            while (i < MAX) {
                printf("%d ", queue[i]);
                i++;
            }
            i = 0;
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        }
        printf("\n");
    }
}

// Function to get the front element
void peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

// Function to get queue size
int getSize() {
    if (isEmpty()) {
        return 0;
    }
    if (front <= rear) {
        return rear - front + 1;
    } else {
        return (MAX - front) + (rear + 1);
    }
}

int main() {
    int choice, value;
    
    printf("Queue Operations using Array (Circular Queue)\n");
    printf("Queue size: %d\n", MAX);
    
    while (1) {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check if empty\n");
        printf("6. Check if full\n");
        printf("7. Get size\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                peek();
                break;
                
            case 5:
                if (isEmpty()) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue is not empty\n");
                }
                break;
                
            case 6:
                if (isFull()) {
                    printf("Queue is full\n");
                } else {
                    printf("Queue is not full\n");
                }
                break;
                
            case 7:
                printf("Current queue size: %d\n", getSize());
                break;
                
            case 8:
                printf("Exiting program...\n");
                exit(0);
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
