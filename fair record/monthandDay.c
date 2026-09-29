/*
26) Month Number and Number of Days.

Algorithm
1. Start
2. Input the month number
3. Use switch statement
4. Display 31 days for the appropriate months
5. Display 30 days for the appropriate months
6. Display 28 or 29 days for february
7. Display Invalid for an invalid month.
8. Stop
*/

// C-program

#include <stdio.h>
int main()
{
    int month;

    printf("Enter month number : ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        case 2:
            printf("28 or 29 days");
            break;
        default:
            printf("Invalid month");
    }

    return 0;
}
