// ---------------------------------------------------------
// Matrix Operations: Addition, Multiplication, Transpose
// Author: Keshu
// ---------------------------------------------------------
// Concepts: 2D arrays, nested loops, linear algebra basics
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

#define MAX 10

void input_matrix(int mat[MAX][MAX], int r, int c, char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            printf("  [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
}

void print_matrix(int mat[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        printf("  |");
        for (int j = 0; j < c; j++)
            printf(" %4d", mat[i][j]);
        printf("  |\n");
    }
    printf("\n");
}

void add_matrices(int A[MAX][MAX], int B[MAX][MAX], int R[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            R[i][j] = A[i][j] + B[i][j];
}

void multiply_matrices(int A[MAX][MAX], int B[MAX][MAX], int R[MAX][MAX],
                       int r, int common, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            R[i][j] = 0;
            for (int k = 0; k < common; k++)
                R[i][j] += A[i][k] * B[k][j];
        }
}

void transpose(int mat[MAX][MAX], int T[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            T[j][i] = mat[i][j];
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], R[MAX][MAX], T[MAX][MAX];
    int choice, r, c;

    printf("%sMatrix Operations%s\n\n", CYAN, RESET);
    printf("1. Addition\n2. Multiplication\n3. Transpose\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter rows and columns (same for both): ");
        scanf("%d %d", &r, &c);
        input_matrix(A, r, c, 'A');
        input_matrix(B, r, c, 'B');
        add_matrices(A, B, R, r, c);
        printf("%sA + B =%s\n", GREEN, RESET);
        print_matrix(R, r, c);

    } else if (choice == 2) {
        int common;
        printf("Rows of A, cols of A (= rows of B), cols of B: ");
        scanf("%d %d %d", &r, &common, &c);
        input_matrix(A, r, common, 'A');
        input_matrix(B, common, c, 'B');
        multiply_matrices(A, B, R, r, common, c);
        printf("%sA x B =%s\n", GREEN, RESET);
        print_matrix(R, r, c);

    } else if (choice == 3) {
        printf("Enter rows and columns of matrix: ");
        scanf("%d %d", &r, &c);
        input_matrix(A, r, c, 'A');
        transpose(A, T, r, c);
        printf("%sTranspose of A =%s\n", GREEN, RESET);
        print_matrix(T, c, r);

    } else {
        printf("%sInvalid choice.%s\n", RED, RESET);
    }

    k_signature();
    return 0;
}
