//WAP to pass structures as function arguments in C and return structures from functions

#include <stdio.h>
#include "../include/keshu_core.h"

int main(){
    struct Point { // Declaration of structure
        int x;
        int y;
    };

    // Function to create a Point structure and return it
    struct Point createPoint(int x, int y) {
        struct Point p; // Local variable of type Point
        p.x = x; // Assigning values to the members of the structure
        p.y = y;
        return p; // Returning the structure
    }

    // Function to print the coordinates of a Point structure
    void printPoint(struct Point p) {
        printf("Point coordinates: (%d, %d)\n", p.x, p.y); // Accessing members of the structure
    }

    // Creating a Point structure using the createPoint function
    struct Point myPoint = createPoint(5, 10);

    // Printing the coordinates of the created Point structure
    printPoint(myPoint);

    k_signature();
    return 0;
}