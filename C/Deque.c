#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }
    deque[front] = value;
    printf("%d inserted at front\n", value);
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = value;
    printf("%d inserted at rear\n", value);
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }
    printf("%d deleted from front\n", deque[front]);
    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }
    printf("%d deleted from rear\n", deque[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

void display() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(1);
    display();
    deleteFront();
    display();
    deleteRear();
    display();
    insertRear(30);
    insertRear(40);
    display();
    return 0;
}
