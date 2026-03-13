#include <stdio.h>
#include "../include/keshu_core.h"




int main()
{
    //Defining the nPr function
    int n, r;
    printf("Enter n and r for nPr calculation (e.g., 5 2): ");
    scanf("%d %d", &n, &r);
    int result = k_factorial(n) / k_factorial(n - r);

    if (r>n || n<0 || r<0)
    {
        printf("Invalid input for nPr calculation.\n");
    }
    else
    {
        printf("The value of %dP%d is: %d\n", n, r, result);
    }

    k_signature();
    
    return 0;

}