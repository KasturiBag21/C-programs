#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void deleteAtBeg(struct Node** head_ref) {
    if (*head_ref == NULL) 
	{
        return;
    }
    struct Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    for (int i = 2; i <= 5; i++) {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = i;
        new_node->next = head;
        head = new_node;
    }
    printf("Linked list before deletion: ");
    printList(head);
    deleteAtBeg(&head);
    printf("Linked list after deletion: ");
    printList(head);

    return 0;
}
