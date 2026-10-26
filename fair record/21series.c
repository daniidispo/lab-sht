/*
1. Start
2. Input n
3. Set sum = 0
4. For i = 1 to n, add i*i to sum;
5. Display sum
6. Stop.
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
        sum = sum + i * i;
    }

    printf("Sum = %d", sum);

    return 0;
}
