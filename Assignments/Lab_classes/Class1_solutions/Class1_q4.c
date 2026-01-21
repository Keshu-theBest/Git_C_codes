//Question 4: Write a program to find the Simple Interest.

#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    //Taking input from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    //Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    //Displaying the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}

//Level: Beginner
//Topic: Basic Arithmetic Operations in C
//Difficulty: Easy