//Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
#include <stdio.h>

int main() {
    int n, pos, i;

    // 1. Get the size of the array
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    // 2. Input the n integers
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the 1-based position to delete
    scanf("%d", &pos);

    // 4. Deletion Logic
    // We start from the index of the element to be deleted (pos - 1)
    // and pull every element from the right to the left.
    if (pos >= 1 && pos <= n) {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // 5. Print the updated array (now effectively n-1 size)
        for (i = 0; i < n - 1; i++) {
            printf("%d", arr[i]);
            // Add a space between numbers, but not after the last one
            if (i < n - 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}