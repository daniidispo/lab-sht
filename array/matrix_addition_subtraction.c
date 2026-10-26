
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j, ch;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    printf("1. Addition\n2. Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            if(ch == 1)
                c[i][j] = a[i][j] + b[i][j];
            else if(ch == 2)
                c[i][j] = a[i][j] - b[i][j];
            else {
                printf("Invalid choice\n");
                return 0;
            }
        }
    }

    printf("Result:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

