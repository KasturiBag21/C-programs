#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("OVERFLOW\n");
        exit(1);
    }
    newNode->data = item;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeg(struct Node** head, int item) {
    struct Node* newNode = createNode(item);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}
void insertAtEnd(struct Node** head, int item) {
    struct Node* newNode = createNode(item);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteFromBeg(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
    } else {
        struct Node* temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
    }
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete!\n");
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        if (temp->prev != NULL) {
            temp->prev->next = NULL;
        } else {
            *head = NULL;
        }
        free(temp);
    }
}
void deleteAtPos(struct Node** head, int item) {
    if (*head == NULL) {
        printf("List is empty.\n");
    } else {
        struct Node* temp = *head;
        while (temp != NULL && temp->data != item) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Value not found in the list\n");
        } else {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                *head = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
        }
    }
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, item;
    do {
        printf("\n1. Insert at beginning\n");
		printf("2. Insert at end\n");
		printf("3. Delete from beginning\n");
		printf("4. Delete from end\n");
		printf("5. Delete at position\n");
		printf("6. Display\n");
		printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeg(&head, data);
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                deleteFromBeg(&head);
                break;
            case 4:
                deleteFromEnd(&head);
                break;
            case 5:
                printf("Enter value to delete: ");
                scanf("%d", &item);
                deleteAtPos(&head, item);
                break;
            case 6:
                display(head);
                break;
            case 7:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid choice.\n");
        }
    } while (choice != 7);
    return 0;
}
