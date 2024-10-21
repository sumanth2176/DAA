#include <stdio.h>

#define MAX_VERTICES 10

int graph[MAX_VERTICES][MAX_VERTICES];
int color[MAX_VERTICES];
int numVertices, numColors;

// Function to check if it's safe to color a vertex with a given color
int isSafe(int v, int c) {
	int i;
    for ( i = 0; i < numVertices; i++) {
        if (graph[v][i] && color[i] == c) {
            return 0; // The color is already used by an adjacent vertex
        }
    }
    return 1;
}

int main() {
	int i,j;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix of the graph:\n");
    for ( i = 0; i < numVertices; i++) {
        for ( j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the number of colors to be used: ");
    scanf("%d", &numColors);

    // Initialize color array with 0 (no color assigned)
    for (i = 0; i < numVertices; i++) {
        color[i] = 0;
    }

    // Backtracking algorithm to color the graph
    int v = 0;
    while (v >= 0) {
        int c;
        for (c = color[v] + 1; c <= numColors; c++) {
            if (isSafe(v, c)) {
                color[v] = c;
                break;
            }
        }

        if (c <= numColors) {
            if (v == numVertices - 1) {
                // All vertices are colored, print the solution
                printf("Solution found:\n");
                for ( i = 0; i < numVertices; i++) {
                    printf("Vertex %d is colored with color %d\n", i + 1, color[i]);
                }
                break;
            } else {
                // Move to the next vertex
                v++;
            }
        } else {
            // No color can be assigned to this vertex, backtrack
            color[v] = 0;
            v--;
        }
    }

    if (v < 0) {
        printf("No solution exists for the given graph and number of colors.\n");
    }

    return 0;
}

