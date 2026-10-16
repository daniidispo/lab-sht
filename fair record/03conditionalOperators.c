/* Start
 * Include library <stdio.h>
 * Declare a, b, c and largest
 * Read three integers from user
 * Find largest using nested conditional operator
 * Check whether a is even or odd
 * Display all the results
 * Stop */

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("\nLargest number: %d\n", largest);
    printf("%d is %s\n", a, (a % 2 == 0) ? "Even" : "Odd");

    return 0;
}
