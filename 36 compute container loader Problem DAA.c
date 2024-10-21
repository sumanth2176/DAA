#include <stdio.h>

#define MAX_ITEMS 100
#define MAX_CONTAINERS 100

int items[MAX_ITEMS];
int containers[MAX_CONTAINERS];
int numItems, numContainers;

int main() {
	int i;
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    printf("Enter the weights of the items:\n");
    for ( i = 0; i < numItems; i++) {
        scanf("%d", &items[i]);
    }

    printf("Enter the number of containers: ");
    scanf("%d", &numContainers);

    // Initialize containers with 0 weight
    for ( i = 0; i < numContainers; i++) {
        containers[i] = 0;
    }

    // Load items into containers
    for ( i = 0; i < numItems; i++) {
        int j;
        for (j = 0; j < numContainers; j++) {
            if (containers[j] + items[i] <= 100) {
                containers[j] += items[i];
                printf("Item %d loaded into Container %d\n", i + 1, j + 1);
                break;
            }
        }

        // If no container can accommodate the item, print an error message
        if (j == numContainers) {
            printf("Error: Item %d cannot be loaded into any container.\n", i + 1);
            break;
        }
    }

    // Print the contents of each container
    printf("\nContents of Containers:\n");
    for ( i = 0; i < numContainers; i++) {
        printf("Container %d: %d\n", i + 1, containers[i]);
    }

    return 0;
}

