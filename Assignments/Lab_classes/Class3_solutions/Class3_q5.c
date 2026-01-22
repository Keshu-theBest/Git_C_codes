//Question 5: Write a program in C to evaluate the sum of a five-digit number.

#include <stdio.h>

int main()
{
    int num, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Ensure the number is five digits
    if (num < 10000 || num > 99999) 
    {
        printf("Please enter a valid five-digit number.\n");
        return 1; // Exit with error code
    }

    // Calculate the sum of the digits
    for (int i = 0; i < 5; i++) 
    {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to sum
        num /= 10;       // Remove the last digit
    }

    printf("The sum of the digits is: %d\n\n", sum);
    return 0;
}
