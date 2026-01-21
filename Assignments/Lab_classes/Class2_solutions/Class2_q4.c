//Question 4: Write a program in C to compute the perimeter and area of rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main() {
    //Declaring and initializing height and width of the rectangle
    float height = 7.0; // height in inches
    float width = 5.0;  // width in inches

    //Calculating perimeter and area
    float perimeter = 2 * (height + width);
    float area = height * width;

    //Displaying the results
    printf("For a rectangle with height %.2f inches and width %.2f inches:\n", height, width);
    printf("Perimeter: %.2f inches\n", perimeter);
    printf("Area: %.2f square inches\n", area);

    return 0;
}

//Level: Beginner
//Topic: Basic Arithmetic Operations in C
//Difficulty: Easy