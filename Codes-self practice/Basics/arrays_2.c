// [IMPORTANT]

#include <stdio.h>
#include "../../include/keshu_core.h"

int main(){
    int v[5]={1,2,3,4,5};

    // printf(v);This will give an error as we cannot print the entire array like this
    //We have to print each element one by one using a loop
    for(int i=0;i<5;i++){
        printf("%d ",v[i]);
    }

    //In order for us to even take inputs for the lements of an array we have to use loops
    printf("\nEnter 5 integers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }

    //Now we again print the elements of the array
    printf("The entered integers are:\n");

    printf("[ "); //Just a decoration bracket
    for(int i=0;i<5;i++){
        printf("%d ",v[i]);
    }
    printf("]\n\n"); //Just a decoration bracket


    //Now if we wanna do something like a matrix we will use two loops
    int matrix[2][3]; //2 rows and 3 columns

    //In order to take inputs for the matrix we use nested loops
    printf("\nEnter elements for a 2x3 matrix:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    //Now we print the matrix
    printf("The entered matrix is:\n");

    //Nested loops again for printing
    for(int i=0;i<2;i++){
        //Print each row
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }

        printf("\n"); //New line after each row
    }

    //Now we can make the array of any size using variables say m and n
    int m,n;
    printf("Enter number of rows and columns (e.g., 3 4): ");
    scanf("%d %d",&m,&n);

    //Declare the matrix in a 2D array
    int mat[m][n];

    //Input matrix elements
    for(int i=0;i<m;i++){
        //Input each element of the row
        for(int j=0;j<n;j++){
            //Prompt for each element
            printf("Enter element [%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    //Print the matrix
    printf("\nMatrix:\n");
    for(int i=0;i<m;i++){
        //Print each element of the row
        for(int j=0;j<n;j++){
            //Print element with a tab space
            printf("%d\t",mat[i][j]);
        }
        printf("\n\n\n"); //These 3 new lines are just for better readability and uniform spacing
    }

    k_signature();

    return 0;
}