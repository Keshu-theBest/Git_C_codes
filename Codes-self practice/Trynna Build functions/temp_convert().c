//Valid temperature considered : (-273)C and above

#include <stdio.h>
#include "../../my_signature.h"


//---------------------------------------------------------------------------------------------//

//Function to convert degree C to degre F
void convert_C_to_F(float C)
{

    //Resultant temperature in degree F (formula)
    float res=(9*C/5)+32;

    //Validity check for physically possible temperatures
    if (C>=(-273.15))
    {
        printf("The result is: %f F\n\n",res);

        printf("--------------------\n\n");
    }
    else
    {
        printf("The temperature you entered is invalid/physically impossible\n\n");
        printf("--------------------\n\n");
    }
}

//---------------------------------------------------------------------------------------------//

//Function to convert degree F to degree C
void convert_F_to_C(float F)
{

    //Resultant temperature in degree C (formula)
    float res=(F-32)*5/9;

    if (res>=(-273.15))
    {
        printf("The result is: %f C\n\n",res);
        printf("--------------------\n\n");
    }
    else 
    {
        printf("The temperature you entered is invalid/physically impossible\n\n");
        printf("--------------------\n\n");
    }
}

//---------------------------------------------------------------------------------------------//

//Function in which we'll be using these defined functions
int main()
{

    //Taking input temperature in degree C
    float C;
    printf("Please enter temperature in C:\n");
    scanf("%f",&C);

    printf("Converting the given value of temperature to degree F units.....\n\n");

    convert_C_to_F(C);
    
//---------------------------------------------------------------------------------------------//

    //Taking input temperature in degree F
    float F;
    printf("Please enter other temperature in F:\n");
    scanf("%f",&F);

    printf("Converting the given value of temperature to degree C units.....\n\n");

    
    convert_F_to_C(F);

    //printing end of program
    printf("----------End Of Program----------\n\n\n");

    signature();
    return 0;
}

//---------------------------------------------------------------------------------------------//