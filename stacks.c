#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 20

int arr[MAX_SIZE];
int top = -1;

void push(int val) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full\n");
        return;
    }
    top++;
    arr[top] = val;
    printf("%d pushed to stack.\n", val);
}

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    int val = arr[top--];
    printf("%d popped from stack.\n", val);
    return val;    
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    printf("Top element is %d\n", arr[top]);
    return arr[top];
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
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
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
