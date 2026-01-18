#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

struct Stack {
    int items[MAX_NODES];
    int top;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    return stack;
}

int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

void push(struct Stack* stack, int value) {
    if (stack->top == MAX_NODES - 1)
        printf("Stack Overflow\n");
    else
        stack->items[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack->items[stack->top--];
    }
}

void DFS(int adjacency_matrix[MAX_NODES][MAX_NODES], int start, int n) {
    int visited[MAX_NODES] = {0};
    struct Stack* stack = createStack();

    push(stack, start);
    visited[start] = 1;

    printf("DFS Traversal: ");

    while (!isEmpty(stack)) {
        int current_node = pop(stack);
        printf("%d ", current_node);

        for (int i = 0; i < n; i++) {
            if (adjacency_matrix[current_node][i] && !visited[i]) {
                push(stack, i);
                visited[i] = 1;
            }
        }
    }

    free(stack);
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int adjacency_matrix[MAX_NODES][MAX_NODES];
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adjacency_matrix[i][j]);
        }
    }

    int start_node;
    printf("Enter the starting node: ");
    scanf("%d", &start_node);

    DFS(adjacency_matrix, start_node, n);

    return 0;
}
