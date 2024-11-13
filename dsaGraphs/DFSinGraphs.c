#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int adjMatrix[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}
};

void DFS(int i) {
    printf("%d ", i);  // Print the current node
    visited[i] = 1;

    for (int j = 0; j < 7; j++) {
        if (adjMatrix[i][j] == 1 && !visited[j]) {
            DFS(j);  // Recursive call for DFS
        }
    }
}

int main() {
    printf("DFS starting from node 1:\n");
    DFS(6);
    printf("\n");
    return 0;
}