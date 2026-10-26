#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check for alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
        
        // Check specifically for lowercase
        if (ch >= 'a' && ch <= 'z') {
            printf("It is a lowercase alphabet.\n");
        } else {
            printf("It is an uppercase alphabet.\n");
        }
    } 
    // Check for digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } 
    // Otherwise it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
