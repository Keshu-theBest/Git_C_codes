// keshu_core.h - The Personal Library

#ifndef KESHU_CORE_H   // 1. Check if "KESHU_CORE_H" is NOT defined
#define KESHU_CORE_H   // 2. If not, Define it now (Lock the door)

// --- YOUR INCLUDES ---
#include <stdio.h>
#include <math.h> 
#include <stdbool.h> // Useful for true/false checks

#define CYAN  "\033[0;36m"
#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

// ---  FUNCTIONS GO HERE ---

// Example 1: Your Custom Power Function
long long k_power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Example 2: Check for Prime
bool k_isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;


}

//Matrix creation function
int k_Matrix(){
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows and columns (e.g., 3 4): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) // Validate input by checking return value of scanf
    {
        printf("Invalid size.\n");
        return 1;
    }

    // Declare the matrix in a 2D array
    int matrix[rows][cols];

    // Input matrix elements
    for (int i = 0; i < rows; i++)
    {
        // Input each element of the row
        for (int j = 0; j < cols; j++)
        {
            // Prompt for each element
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                // Handle invalid input
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++)
    {
        // Print each element of the row
        for (int j = 0; j < cols; j++)
        {
            // Print element with a tab space
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n\n");
    }
}

//Function to print factors of a number
void k_print_factors(int x){
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

//Function to calculate roots of a quadratic equation
void k_roots(float a,float b,float c){
    float D, root1, root2, sqrtD;
    D=(b*b)-4*(a*c);
    sqrtD=sqrt(D);

    if (D==0)
    {   
        root2=root1=-(b/(2*a));
    }
    else if (D>0)
    {
        root1= -(b/2*a)+(sqrtD/(2*a));
        root2= -(b/2*a)-(sqrtD/(2*a));
    }
    
    if (D>=0)
    {
        printf("The roots of the quadratic equation are:-\n");
        printf("%f\n",root1);
        printf("%f\n",root2);
    }

    else
    {    
        printf("Complex roots!!\n\n");
        float k1,k2;
        k1=-(b/2*a);
        k2=(sqrt(-D))/2*a;

        printf("The first root is:\n");
        printf("%f + (%f)i\n",k1,k2);

        printf("The second root is:\n");
        printf("%f - (%f)i\n",k1,k2);

    }
}

//Function to get the integer part of a float
int k_gif(float x){
    int k;
    k=(int)x;

    return k;
}

//Function to get the fractional part of a float
float k_fractional_part(float x){
    int k;
    k=(int)x;

    float f;
    f=x-k;

    return f;
}

//Function to calculate factorial of a number
int k_factorial(int n){
    int product=1;

    //using for loop to give n! as a return value
    for (int i=1;i<=n;i++) //Setting int i=2 will do the same, it would ven reduce the iteration one time, I am not doing it in order to tell you this
    {
        product *= i;
    }

    return product; //Giving fact(n) a return value of the product (actually the final value of product)
}

//Function to check for leap year
void k_isLeap(int Y){
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
        printf("\nThe year %d is/was a leap year indeed!!\n\n",Y);
    }
    else
    {
        printf("\nThe year %d is/was not leap.\n\n",Y);
    }
}

// Example 3: Your Signature (from yesterday)
void k_signature() {
    char* cyan = "\033[0;36m";
    char* green = "\033[0;32m";
    char* reset = "\033[0m";

    printf("\n%s========================================%s\n", cyan, reset);
    printf("%s   >> CODE BY KESHU %s[SYSTEM_ONLINE]%s <<   %s\n", cyan, green, cyan, reset);
    printf("%s========================================%s\n", cyan, reset);
    printf("%s      Github: github.com/Keshu-theBest    %s\n\n", green, reset);
}

#endif // 3. End the Guard