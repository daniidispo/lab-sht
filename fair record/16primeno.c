#include <stdio.h>

int main() {
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n) {
        if (n % i == 0) {
            count++;
            break;
        }
        i++;
    }

    if (n > 1){
      if (count == 0)
         printf("Prime number");
  }
    else
        printf("Not a prime number");

    return 0;
}

