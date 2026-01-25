//Write a C program to check whether a triangle is Equilateral , Isosceles or Scalene by taking the length as input of three sides from the user.

#include <stdio.h>

int ifTr(float a,float b,float c)
{
    int ifTr=1;

    if ((a+b)<=c || (b+c)<=a || (c+a)<=b)
        ifTr=0;

    return ifTr;
}

void triangle_type_chk(float a,float b,float c)
{
    if (a==b && b==c)
        printf("Equilateral triangle!\n");
    else if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a))
        printf("Isoscales Triangle!\n");
    else
        printf("Scalene triangle!\n");

}

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