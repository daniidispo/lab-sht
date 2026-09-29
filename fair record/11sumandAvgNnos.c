/*
1. Start
2. Input n
3. Set i = 1, sum = 0
4. Repeat while i <= n:
     a. sum = sum + i
     b. Increment i by 1
5. If n > 0:
     a. average = sum / n
6. Display sum and average
7. Stop
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;
    float average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    if (n > 0) {
        average = (float)sum / n;
        printf("Sum of first %d natural numbers : %d \n", n, sum);
        printf("Average of first %d natural numbers : %.2f \n", n, average);
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}
