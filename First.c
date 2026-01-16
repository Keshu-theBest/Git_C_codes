#include <stdio.h>
/*This is called a preprocessor directive
What it does?
It tells our computer to make the contents of the stdio.h file available to our program, even before actual compilation starts.
*/

//Taking input and giving output in C//

int main() //main is the starting point of our program, it is a function. anything like fxn_name() is a function.
// every program must have a main function
//Everything that belongs to fxn_name() is enclosed within curly braces {   }
//In C language, every statement executes line by line and ends with a semicolon (;)
{
    int a; // variable declaration
    a = 45; // variable initialization
    printf("The value of a is %d\n", a); // print statement

    int b;
    printf("Please enter the value of b:\n");
    scanf("%d", &b); // taking input from user
    printf("The value of b is %d\n", b);

    return 0; // return statement. See, main is of type int, so it must return an integer value. So we return 0, when program ends successfully.Otherwise, we can return some other integer value to indicate some error.
}