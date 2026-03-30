//Define the struct stu with the members of their name as str, roll in int, perc in float
//Write a program to input these details for 1 studnet and display them

#include <stdio.h>
#include <strings.h>

int main()
{
    struct stu{
        char name[20];
        int roll;
        float percent;
    };

    struct stu stu1;

    printf("Enter the roll number of student: ");
    scanf("%d",stu1.roll);

    printf("Enter the percentage of student: ");
    scanf("%f",stu1.percent);

    printf("Please enter the students name: ");
    fgets(stu1.name,sizeof(stu1.name),stdin);

    printf("Student Name: %s \n Student Roll no: %d \n Student percentage: %f",stu1.name,stu1.roll,stu1.percent);


    return 0;



}

//Same program for 20 students and then print it

