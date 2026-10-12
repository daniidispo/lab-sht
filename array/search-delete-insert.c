#include <stdio.h>

int main() {
    int a[10], n, i, item, pos, num, found;

    // Input array elements
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Insertion
    if (n < 10) {
        printf("Enter element to insert: ");
        scanf("%d", &item);

        printf("Enter position to insert (1 to %d): ", n + 1);
        scanf("%d", &pos);

        if (pos >= 1 && pos <= n + 1) {
            for (i = n - 1; i >= pos - 1; i--) {
                a[i + 1] = a[i];
            }

            a[pos - 1] = item;
            n++;

            printf("Array after insertion:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        } else {
            printf("Invalid position!\n");
        }
    } else {
        printf("Array is full. Insertion not possible.\n");
    }

    // Deletion
    printf("\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos >= 1 && pos <= n) {
        for (i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position!\n");
    }

    // Searching
    printf("\nEnter number to search: ");
    scanf("%d", &num);

    found = 0;

    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            printf("Number found at position %d (index %d)\n",
                   i + 1, i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
