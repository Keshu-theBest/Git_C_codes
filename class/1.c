//Program to declare and initialise a structure variable and print the values of its members

#include <stdio.h>
#include "../include/keshu_core.h"

int main(){
    struct student
    {
        char name[50];
        int roll_no;
        float marks;
    };

    struct student s1;

    printf("Enter the name of the student: ");
    scanf("%s", s1.name);

    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.roll_no);

    printf("Enter the marks of the student: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    k_signature();
    return 0;
}