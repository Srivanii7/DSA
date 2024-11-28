//DFS
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Adjacency matrix representation of the graph
int adjMatrix[MAX][MAX];
bool visited[MAX];

// DFS function
void DFS(int node, int totalNodes) {
    // Mark the current node as visited and print it
    visited[node] = true;
    printf("%d ", node);

    // Traverse all neighbors of the current node
    for (int i = 0; i < totalNodes; i++) {
        if (adjMatrix[node][i] == 1 && !visited[i]) {
            DFS(i, totalNodes); // Recursive call for DFS
        }
    }
}




//BFS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 100

// Adjacency matrix representation of the graph
int adjMatrix[MAX][MAX];
bool visited[MAX];

// Queue structure
int queue[MAX], front = -1, rear = -1;

// Function to enqueue
void enqueue(int node) {
    if (rear == MAX - 1) return;
    queue[++rear] = node;
    if (front == -1) front = 0;
}

// Function to dequeue
int dequeue() {
    if (front == -1) return -1;
    int node = queue[front++];
    if (front > rear) front = rear = -1;
    return node;
}

// BFS function
void BFS(int startNode, int totalNodes) {
    enqueue(startNode);
    visited[startNode] = true;

    while (front != -1) {
        int currentNode = dequeue();
        printf("%d ", currentNode);

        // Traverse all neighbors of the current node
        for (int i = 0; i < totalNodes; i++) {
            if (adjMatrix[currentNode][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = true;
            }
        }
    }
}


