/*
 * 1.Start
 * 2. Include <stdio.h>
 * 3. Declare variables a, b for operands and sum, diff, prod, quot, rem for the results
 * 4. Read the values of a and b from the user
 * 5. Calculate
 *     - Addition
 *     - Subtraction
 *     - Multiplication
 *     - Division
 *     - Modulus
 *  6. Display all results 
 *  7. Stop*/

#include <stdio.h>

int main() {
    int choice, a, b;
    int sum, diff, prod;

    printf("Enter 2 numbers: ");
    scanf("%d,%d", &a, &b);

    printf("Enter a choice to do:\n 1.sum\n 2.difference\n 3.product\n: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sum = a + b;
        printf("Sum of A and B: %d\n", sum);
    } 
    else if (choice == 2) {
        if (a > b) {
            diff = a - b;
        } else {
            diff = b - a;
        }
        printf("Difference of A and B: %d\n", diff);
    } 
    else if (choice == 3) {
        prod = a * b;
        printf("Product of A and B: %d\n", prod);
    } 
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

