//Qustion 5:  Write a program in C to convert specified days into years, weeks, and days. Ignore leap year.

#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    //Taking input from user
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    //Calculating years, weeks and days
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;

    //Displaying the result
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", totalDays, years, weeks, days);

    return 0;
}

//Level: Beginner
//Topic: Basic Input/Output and Arithmetic Operations in C
//Difficulty: Easy

//Note: This is a good practice problem for understanding integer division and modulus operations in C.