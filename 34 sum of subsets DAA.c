#include <stdio.h>

#define MAX_SIZE 100

int set[MAX_SIZE];
int subset[MAX_SIZE];
int n,i, targetSum;

int main() {
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    printf("\nSubsets with sum equal to %d are:\n", targetSum);

    int sum = 0, k = 0, remain = 0;

    while (1) {
        subset[k] = 1;

        if (sum + set[k] == targetSum) {
            printf("Subset found: { ");
            for ( i = 0; i < n; i++) {
                if (subset[i] == 1) {
                    printf("%d ", set[i]);
                }
            }
            printf("}\n");
        } else if (sum + set[k] + set[k + 1] <= targetSum) {
            sum += set[k];
            remain -= set[k];
            k++;
            continue;
        }

        while ((sum + remain - set[k] >= targetSum) && (k > 0)) {
            subset[k] = 0;
            k--;
        }

        if (k == 0) {
            break;
        }

        subset[k] = 0;
        sum -= set[k];
        remain += set[k];
        k++;
    }

    return 0;
}

