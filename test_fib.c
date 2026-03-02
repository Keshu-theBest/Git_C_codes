#include <stdio.h>

void fib_series(int n){
    if (n <= 0) return;
    
    int first = 0, second = 1;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++){
        if (i == 0)
            printf("%d ", first);
        else if (i == 1)
            printf("%d ", second);
        else {
            int next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib_series(n);
    return 0;
}