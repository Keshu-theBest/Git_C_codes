//Leap year or not

#include <stdio.h>

void isLeap(int Y)
{
    int Leap;
    if (Y>=0)
    {
        if (Y%4==0 && Y%100!=0)
        {
            Leap=1;
        }
        else if (Y%400==0)
        {
            Leap=1;
        }
        else
        {
            Leap=0;
        }
    }

    if (Leap)
    {
        printf("\nThe given year %d is/was a leap year indeed!!\n\n",Y);
    }
}

int main()
{
    int Y;
    printf("Please enter the Year:\n");
    scanf("%d",&Y);

    isLeap(Y);

    return 0;
}