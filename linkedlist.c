#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

// Global variable to store the head of the linked list
struct Node* root = NULL;

// Function declarations
void append();
void addatbegin();
void addatafter();
int length();
void display();
void deleteNode();

int main() {
    int ch, len;  // Declare len here
    while (1) {
        printf("Single Linked List Operation\n");
        printf("1. Append\n");
        printf("2. AddAtBegin\n");
        printf("3. AddAtAfter\n");
        printf("4. Length\n");
        printf("5. Display\n");
        printf("6. Delete\n");
        printf("7. Exit\n");

        printf("Enter Your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                append();
                break;
            case 2:
                addatbegin();
                break;
            case 3:
                addatafter();
                break;
            case 4:
                len = length();  // Call length() to get the length
                printf("%d\n", len);
                break;
            case 5:
                display();
                break;
            case 6:
                deleteNode();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}

void append() {
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the node data: ");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL) {
        root = temp;
    } else {
        struct Node* p;
        p = root;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }
}

int length() {
    int count = 0;
    struct Node* temp; 
    temp = root;
    while (temp != NULL) {
        count++;
        temp = temp->link;
    }
    return count;
}

void display() {
    struct Node* temp;
    temp = root;
    if (temp == NULL) {
        printf("List is empty\n");
    } else {
        while (temp != NULL) {
            printf("%d--->", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void deleteNode() {
    struct Node* temp;
    int loc;
    printf("Enter the location: ");
    scanf("%d", &loc);
    if (loc > length()) {
        printf("Invalid location\n");
    } else if (loc == 1) {
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    } else {
        struct Node* p = root, *q;
        int i = 1;
        while (i < loc - 1) {
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
    }
}

void addatafter() {
    struct Node* temp;
    int loc, i = 1, len;
    printf("Enter the location: ");
    scanf("%d", &loc);
    len = length();  // Call length() to get the length
    if (loc > len) {
        printf("Invalid location\n");
    } else {
        struct Node* p = root;
        while (i < loc) {
            p = p->link;
            i++;
        }
        temp = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter node data: ");
        scanf("%d", &temp->data);
        temp->link = p->link;
        p->link = temp;
    }
}

void addatbegin() {
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL) {
        root = temp;
    } else {
        temp->link = root;
        root = temp;
    }
}