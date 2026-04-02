//WAP to demonstare "structure of arrays" in C

#include <stdio.h>
#include "../include/keshu_core.h"

int main(){
    struct Student { //Declaration
        char name[50];
        int age;
        float grade;
    };

    // Array of structures (Structure of Arrays)
    struct Student students[3] = { //Initialization
        {"Alice", 20, 85.5},
        {"Bob", 22, 90.0},
        {"Charlie", 19, 78.0}
    };

    // Accessing and printing student information
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
    }

    k_signature();
    return 0;
}