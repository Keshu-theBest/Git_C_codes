//Question 1: Write a program in C to understand the input and output process.

//Solution:

//Including standard input-output header file
//This is required for taking input and giving output
#include <stdio.h>

int main() {
    //Declaring variables to store user input
    int num;
    char ch;
    float decimal;

    //Asking user for an integer input
    printf("Enter an integer: ");
    scanf("%d", &num);

    //Asking user for a character input
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character

    //Asking user for a floating-point input
    printf("Enter a decimal number: ");
    scanf("%f", &decimal);

    //Giving the inputs back to the user
    printf("You entered:\n");
    printf("Integer: %d\n", num);
    printf("Character: %c\n", ch);
    printf("Decimal number: %.2f\n\n\n", decimal); // Displaying decimal number with 2 decimal places (.2f)

    return 0;
} 
