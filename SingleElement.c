#include <stdio.h>
#include <stdlib.h>

// Function to compare elements for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the minimum cost to reduce the array
int min_cost_to_reduce_array(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare); // Sort the array
    int total_cost = 0;

    while (size > 1) {
        // Sum the first two elements and add the result back to the array
        int new_sum = arr[0] + arr[1];
        total_cost += new_sum; // Add the cost of the operation

        // Update the array by shifting elements
        arr[0] = new_sum;
        for (int i = 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce the size of the array

        qsort(arr, size, sizeof(int), compare); // Re-sort the array
    }

    return total_cost;
}

int main() {
    int size;
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int result = min_cost_to_reduce_array(array, size);
    printf("%d\n", result); // Minimum cost to reduce the array

    return 0;
}
