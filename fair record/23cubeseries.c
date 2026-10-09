/*
23) Sum of series 1^3 + 2^3 + ... n^3

Algorithm
1. Start
2. Input n
3. Set Sum = 0
4. for i = 1 to n, add i*i*i to sum
5. Display sum
6. Stop
*/

// Program
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i * i;
    }

    printf("Sum = %d", sum);

    return 0;
}
