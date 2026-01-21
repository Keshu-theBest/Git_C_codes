//Question 2: Write a program in C to print area of circle when radius of circle is entered by user.

#include <stdio.h>
#define PI 3.14159 //Defining constant value for Pi
//Both include and define are preprocessor directives

int main() {
    float radius, area;

    //Asking user for radius input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //Calculating area of the circle
    area = PI * radius * radius;

    //Displaying the area
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

//Level: Beginner
//Topic: Basic Input/Output and Arithmetic Operations in C
//Difficulty: Easy