//Question 3: Write a program in C to multiply two floating point numbers.

#include <stdio.h>

int main()
{
    //initiating a,b and mul_flt
    float a,b,mul_flt;

    //Taking a and b as input (The numbers we need to multiply)
    printf("Please enter a: \n");
    scanf("%f",&a);
    printf("Please enter b: \n");
    scanf("%f",&b);

    //Defining and printing the multiplication of a and b as mul_flt
    mul_flt=a*b;
    printf("The multiple to two given floating point numbers is: %f\n\n",mul_flt);

    return 0;
}