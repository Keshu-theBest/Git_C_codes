//Fibonaci series print using functions

#include <stdio.h>
#include "../../include/keshu_core.h"

// Function to print Fibonacci series
void fibonacci(int n){
    int t_1=0, t_2=1, nextTerm;
    printf("Fibonacci Series: \n");
    for(int i=1; i<=n; ++i){
        printf("%d, ", t_1);
        nextTerm = t_1 + t_2;
        t_1 = t_2;
        t_2 = nextTerm;
    }
}

// Main function where execution starts
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);

    k_signature();
    return 0;
}