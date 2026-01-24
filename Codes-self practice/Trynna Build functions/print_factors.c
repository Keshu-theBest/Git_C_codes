//C Program to Find All Factors of Number

#include <stdio.h>

void print_factors(int x)
{
    if (x==0)
        printf("0 is the only divisor of %d",x);
    else if (x>0)
    {   
        printf("The factors of x are:\n");
        for (int i=1;i<=x;i++)
        {
            if (x%i==0)
            {
                printf("%d\n",i);
            }
        }
    }
    else
        printf("Can't print the factors of negative numbers!\n\n");

    printf("\n");

}

int main()
{
    int N;
    printf("Give a value to N:\n");
    scanf("%d",&N);

    print_factors(N);

    return 0;
}