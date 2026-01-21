//Question 3: Write a program to find the sum, difference, multiplication, division, and average of two numbers

#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient, average;

    //Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    //Performing calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    average = sum / 2;

    //Displaying results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Average: %.2f\n", average);

    return 0;
}

//Level: Beginner
//Topic: Basic Arithmetic Operations in C
//Difficulty: Easy