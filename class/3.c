//Program to declare and initialise a union and an example of union

#include <stdio.h>
#include "../include/keshu_core.h"

int main(){
    union Data // A union is a user-defined data type that can hold different types of data but only one type at a time. It is similar to a structure, but in a union, all members share the same memory location. This means that the size of the union is determined by the size of its largest member. When you assign a value to one member of the union, it overwrites the values of all other members.
    {
        int i;
        float f;
        char str[20];
    };

    union Data data;

    // Assigning integer value
    data.i = 10;
    printf("Data as integer: %d\n", data.i);

    // Assigning float value (overwrites the integer)
    data.f = 220.5;
    printf("Data as float: %.2f\n", data.f);

    // Assigning string value (overwrites the float)
    snprintf(data.str, sizeof(data.str), "Hello, World!");
    printf("Data as string: %s\n", data.str);

    k_signature();
    return 0;
}