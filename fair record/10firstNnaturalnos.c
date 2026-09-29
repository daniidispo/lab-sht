/*
10. Display First N natural numbers using a while loop.

-> Algorithm
1. Start
2. Input n
3. Set i = 1
4. Repeat while i <= n
5. Display i;
6. Increment i by 1;
7. Stop.
*/

// Program

#include <stdio.h>

int main() {
    int n;
    int i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are :\n", n);

    while(i <= n) {
    printf("%d", i);
    i++;
  }
printf ("\n");
return 0;
}
