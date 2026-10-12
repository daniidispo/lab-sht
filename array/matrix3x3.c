#include <stdio.h>

int main()
{
    int a[3][3], i, j;

    printf("Enter the elements of the 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Printing the matrix
    printf("\n The entered matirx is /n")
      for(i=0; i<3; i++){
        printf("\n")
          for(j = 0; j<3; j++)
          {
            printf("%d\t", a[i][j]);
          }
      }
    // Transpose
    printf("Transpose of the matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
