//Program to input the details and print them for an eployee using structure

#include <stdio.h>
#include "../include/keshu_core.h"

int main(){
    struct employee
    {
        char name[50];
        int id;
        float salary;
    };

    struct employee e1;

    printf("Enter the name of the employee: ");
    scanf("%s", e1.name);

    printf("Enter the ID of the employee: ");
    scanf("%d", &e1.id);

    printf("Enter the salary of the employee: ");
    scanf("%f", &e1.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("Salary: %.2f\n", e1.salary);

    k_signature();
    return 0;
}