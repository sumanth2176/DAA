#include <stdio.h>
#include <limits.h>

#define N 4

int costMatrix[N][N] = {
    {9, 2, 7, 8},
    {6, 4, 3, 7},
    {5, 8, 1, 8},
    {7, 6, 9, 4}
};

int rowCovered[N] = {0};
int colCovered[N] = {0};
int assignment[N][2];
int totalCost = 0;

int main() {
    // Subtract the minimum value from each row
    int i,j;
    for ( i = 0; i < N; i++) {
        int minVal = INT_MAX;
        for ( j = 0; j < N; j++) {
            if (!rowCovered[i] && costMatrix[i][j] < minVal) {
                minVal = costMatrix[i][j];
            }
        }
        if (minVal != INT_MAX) {
            for ( j = 0; j < N; j++) {
                if (!rowCovered[i]) {
                    costMatrix[i][j] -= minVal;
                }
            }
        }
    }

    // Subtract the minimum value from each column
    for ( j = 0; j < N; j++) {
        int minVal = INT_MAX;
        for ( i = 0; i < N; i++) {
            if (!colCovered[j] && costMatrix[i][j] < minVal) {
                minVal = costMatrix[i][j];
            }
        }
        if (minVal != INT_MAX) {
            for ( i = 0; i < N; i++) {
                if (!colCovered[j]) {
                    costMatrix[i][j] -= minVal;
                }
            }
        }
    }

    // Cover zeros in the matrix
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            if (costMatrix[i][j] == 0 && !rowCovered[i] && !colCovered[j]) {
                rowCovered[i] = 1;
                colCovered[j] = 1;
                break;
            }
        }
    }

    // Repeating steps until all rows are covered
    while (1) {
        int count = 0;
        for ( i = 0; i < N; i++) {
            if (rowCovered[i]) {
                count++;
            }
        }
        if (count == N) {
            break;
        }

        // Find the minimum value among uncovered entries
        int minVal = INT_MAX;
        for ( i = 0; i < N; i++) {
            for ( j = 0; j < N; j++) {
                if (!rowCovered[i] && !colCovered[j] && costMatrix[i][j] < minVal) {
                    minVal = costMatrix[i][j];
                }
            }
        }

        // Cover rows and uncover columns
        for ( i = 0; i < N; i++) {
            if (rowCovered[i]) {
                for ( j = 0; j < N; j++) {
                    costMatrix[i][j] += minVal;
                }
            }
            if (colCovered[i]) {
                for ( j = 0; j < N; j++) {
                    costMatrix[j][i] -= minVal;
                }
            }
        }

        // Cover zeros in the matrix
        for ( i = 0; i < N; i++) {
            for ( j = 0; j < N; j++) {
                if (costMatrix[i][j] == 0 && !rowCovered[i] && !colCovered[j]) {
                    rowCovered[i] = 1;
                    colCovered[j] = 1;
                    break;
                }
            }
        }
    }

    // Retrieve the assignment and calculate total cost
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            if (rowCovered[i] && colCovered[j]) {
                assignment[i][0] = i;
                assignment[i][1] = j;
                totalCost += costMatrix[i][j];
            }
        }
    }

    // Display the assignment and total cost
    printf("Assignment:\n");
    for ( i = 0; i < N; i++) {
        printf("Worker %d assigned to Task %d\n", assignment[i][0] + 1, assignment[i][1] + 1);
    }
    printf("Total Cost: %d\n", totalCost);

    return 0;
}

