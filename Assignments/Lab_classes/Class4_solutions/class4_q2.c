//Write a program in C to check entered number is even or odd.

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter n:\n");
    scanf("%d",&n);

    if (n%2==0)
        printf("Even!!\n\n");
    else
        printf("Odd.\n\n");

    return 0;
}

//This I assume that, is so easy that no need for commenting