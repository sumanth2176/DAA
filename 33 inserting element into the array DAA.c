#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, num, pos,i;

    // Input the size of the list
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    // Input the elements of the list
    printf("Enter %d elements:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to be inserted
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    // Input the position to insert the number
    printf("Enter the position to insert the number (1 to %d): ", size + 1);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position. Insertion failed.\n");
        return 1;
    }

    // Shift elements to the right to make space for the new number
    for ( i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the number at the specified position
    arr[pos - 1] = num;

    // Increase the size of the list
    size++;

    // Print the updated list
    printf("List after insertion:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

