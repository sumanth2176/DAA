#include <stdio.h>
#include <limits.h>

#define V 5  // Number of vertices in the graph

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int dist[V];     // The output array dist[i] holds the shortest distance from source to i
    int sptSet[V];   // sptSet[i] is true if vertex i is included in the shortest path tree or the shortest distance from source to i is finalized

    // Initialize all distances as INFINITE and sptSet[] as false
    int i, u, v;
    for (i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    int source = 0;  // Source vertex

    // Distance of source vertex from itself is always 0
    dist[source] = 0;
  int count;
    // Find the shortest path for all vertices
    for ( count = 0; count < V - 1; count++) {
        u = -1;
        int minDist = INT_MAX;

        // Find the vertex with the minimum distance value
        for (v = 0; v < V; v++) {
            if (!sptSet[v] && dist[v] <= minDist) {
                u = v;
                minDist = dist[v];
            }
        }

        if (u == -1)
            break;

        sptSet[u] = 1;

        for (v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    // Print the constructed distance array
    printf("Vertex \t Distance from Source\n");
    for (i = 0; i < V; i++)
        printf("%d \t %d\n", i, dist[i]);

    return 0;
}

