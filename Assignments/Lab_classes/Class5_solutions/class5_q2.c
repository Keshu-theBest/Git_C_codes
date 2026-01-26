//Write a C program to check whether a triangle is Equilateral , Isosceles or Scalene by taking the length as input of three sides from the user.

#include <stdio.h>

//Function to check whether the given sides can form a triangle or not
int ifTr(float a,float b,float c)
{
    int ifTr=1;

    //Checking the triangle inequality theorem
    if ((a+b)<=c || (b+c)<=a || (c+a)<=b)
        ifTr=0;

    //Their is no need of else condition here!
    return ifTr;
}

//Function to check the type of triangle
void triangle_type_chk(float a,float b,float c)
{
    if (a==b && b==c)
        printf("Equilateral triangle!\n");
    else if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a))
        printf("Isosceles Triangle!\n");
    else
        printf("Scalene triangle!\n");

}

//Main function
int main()
{
    float a,b,c;
    printf("Give the values of a b c:\n");
    scanf("%f %f %f",&a,&b,&c);

    if (ifTr(a,b,c))
    {
        triangle_type_chk(a,b,c);    
    }
    else
        printf("The given sides can not form a triangle!!!\n\n");
    
    return 0;
}

//This is also gonna be added to the 'Trynna build functions folder'