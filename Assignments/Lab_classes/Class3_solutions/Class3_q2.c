//Question 2: Write a program in C to swap two numbers.

#include <stdio.h>

int main()
{
    int A,B,temp;
    //A and B are our main variables whose value we need to swap
    //temp is a temporary variable we will b using to store the initial value of one of the main variables to solve the overwrite by swapping.

    //Taking A and B as input and then storing them in two registers say reg_A and reg_B.(That for temp be reg_temp)
    printf("Please enter A:");
    scanf("%d",&A);
    printf("Please enter B:");
    scanf("%d",&B);

    //printing the initial values of A and B
    printf("The initial value of A is: %d\n",A);
    printf("The initial value of B is: %d\n",B);

    temp=B;  //temporarily storing B in reg_temp
    B=A;     //Overwriting reg_B with the value of A
    A=temp;  //The initial value of B is in reg_temp so overwriting reg_A with the value in reg_temp

    //Result: A and B are swapped, and temp has the value of initial B

    //printing the final values of A and B
    printf("\n\nThe value of A after swap: %d\n",A);
    printf("The value of B after swap: %d\n\n",B);

    //-------------------------------------------------End of Program-------------------------------------------------------//

    return 0;
}

//Level: Beginner
//Topic: Variable Manipulation and Input/Output in C
//Difficulty: Easy