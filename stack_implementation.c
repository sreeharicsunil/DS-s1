#include <stdio.h>
#include <stdbool.h>
#define MAX 5


int stack[MAX];
int top = -1;

// Push
void push(int value) {
    if (top >= MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

// Pop
int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Peek
int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// isEmpty
bool isEmpty() {
    return top == -1;
}

// Display stack
void display() {
    if (top < 0) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped value: %d\n", value);
                break;
            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

