#include <stdio.h>
#include <string.h> // For strcpy function
#include "../../include/keshu_core.h"

int main(){
    struct stu_details
    {
        char name[20];
        int roll;
        float marks;
    };

    struct stu_details student1={"Alice", 101, 85.5};

    // student1 = {"Alice", 101, 85.5}; // This will cause an error because you cannot assign values to a structure variable after it has been declared. You need to assign values to each member individually.

    struct stu_details student2;

    student2.roll = 102;
    student2.marks = 90.0;
    // student2.name = student1.name; // This will cause an error because you cannot assign arrays directly in C. We need function strcpy to copy strings.
    strcpy(student2.name, student1.name); //This is the correct way to copy strings in C.


    printf("Student 1: Name: %s, Roll: %d, Marks: %.2f\n", student1.name, student1.roll, student1.marks);
    printf("Student 2: Name: %s, Roll: %d, Marks: %.2f\n", student2.name, student2.roll, student2.marks);

    k_signature();
    return 0;
}