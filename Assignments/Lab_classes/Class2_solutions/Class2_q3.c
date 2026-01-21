//Question 3: Write a program to compute quotient and remainder when dividend and divisor are given.

#include <stdio.h>

int main() {
    int dividend, divisor;
    int quotient, remainder;

    //Taking input from user
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    //Calculating quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    //Displaying results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

//Level: Beginner
//Topic: Basic Arithmetic Operations in C
//Difficulty: Easy

// Note: The only problem with this code is that it uses integer division, which means if the user inputs floating point numbers, the program will truncate the decimal part.
// To handle floating point numbers, we can modify the code to use float or double data types and use the fmod function from math.h for remainder calculation.
//I am giving such solution as another file "Class2_q3_float.c"