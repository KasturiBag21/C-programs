#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

struct Queue {
    int items[MAX_NODES];
    int front;
    int rear;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

int isEmpty(struct Queue* queue) {
    if (queue->rear == -1)
        return 1;
    else
        return 0;
}

void enqueue(struct Queue* queue, int value) {
    if (queue->rear == MAX_NODES - 1)
        printf("\nQueue is Full!!");
    else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
    }
}

int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}

void BFS(int adjacency_matrix[MAX_NODES][MAX_NODES], int start, int n) {
    int visited[MAX_NODES] = {0};
    struct Queue* queue = createQueue();

    visited[start] = 1;
    enqueue(queue, start);

    printf("BFS Traversal: ");

    while (!isEmpty(queue)) {
        int current_node = dequeue(queue);
        printf("%d ", current_node);

        for (int i = 0; i < n; i++) {
            if (adjacency_matrix[current_node][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }

    free(queue);
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

    BFS(adjacency_matrix, start_node, n);

    return 0;
}
