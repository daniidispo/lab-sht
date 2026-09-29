#include <stdio.h>

int main() {
    int i = 0, largest = 0, num, N;

    printf("Enter N: ");
    scanf("%d", &N);

    do {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }

        i++;

    } while (i < N);

    printf("largest = %d", largest);

    return 0;
}

