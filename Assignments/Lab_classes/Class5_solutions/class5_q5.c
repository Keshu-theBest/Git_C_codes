//Write a C program to input a number and check positive, negative or zero using switch case.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //This is the core of the problem
    switch ((num > 0) - (num < 0)) 
    // This expression evaluates to 1 for positive, -1 for negative, and 0 for zero
    {
        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
    }
    return 0;
}

//What expression to use inside switch is the crux of this problem