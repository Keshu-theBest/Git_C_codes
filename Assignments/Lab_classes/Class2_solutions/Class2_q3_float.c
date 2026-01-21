//Solution to problem 3 for floating point numbers

#include <stdio.h>
#include <math.h> //Including math.h for 'fmod' function

int main() {
    float dividend, divisor;
    float quotient, remainder;

    //Taking input from user
    printf("Enter dividend: ");
    scanf("%f", &dividend);
    printf("Enter divisor: ");
    scanf("%f", &divisor);

    //Calculating quotient and remainder
    quotient = dividend / divisor;
    remainder = fmod(dividend, divisor); //Using fmod to calculate remainder for floating point numbers
    //fmod(x, y) returns the remainder of x divided by y, in floating point

    //Displaying results
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %.2f\n", remainder);

    return 0;
}