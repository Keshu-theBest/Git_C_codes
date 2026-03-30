// ---------------------------------------------------------
// Gaussian Elimination with Partial Pivoting
// Solves a system of n linear equations:  Ax = b
// Author: Keshu
// ---------------------------------------------------------
// Concept: row reduction on the augmented matrix [A|b],
//          then back-substitution to get the solution vector x
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

#define MAX 10

int main() {
    int n;
    printf("%sGaussian Elimination — Solve Ax = b%s\n\n", CYAN, RESET);
    printf("Enter number of equations (n): ");
    scanf("%d", &n);

    double aug[MAX][MAX + 1];  // augmented matrix [A|b]

    printf("Enter the augmented matrix [A|b] row by row:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d (%d coefficients + 1 RHS): ", i + 1, n);
        for (int j = 0; j <= n; j++)
            scanf("%lf", &aug[i][j]);
    }

    // ---- Forward Elimination ----
    for (int col = 0; col < n; col++) {

        // Partial pivoting: find row with largest |value| in this column
        int pivot_row = col;
        for (int row = col + 1; row < n; row++)
            if (fabs(aug[row][col]) > fabs(aug[pivot_row][col]))
                pivot_row = row;

        // Swap pivot row to current position
        if (pivot_row != col)
            for (int j = 0; j <= n; j++) {
                double tmp = aug[col][j];
                aug[col][j] = aug[pivot_row][j];
                aug[pivot_row][j] = tmp;
            }

        if (fabs(aug[col][col]) < 1e-9) {
            printf("%sNo unique solution (singular matrix).%s\n", RED, RESET);
            return 1;
        }

        // Eliminate entries below the pivot
        for (int row = col + 1; row < n; row++) {
            double factor = aug[row][col] / aug[col][col];
            for (int j = col; j <= n; j++)
                aug[row][j] -= factor * aug[col][j];
        }
    }

    // ---- Back Substitution ----
    double x[MAX];
    for (int i = n - 1; i >= 0; i--) {
        x[i] = aug[i][n];
        for (int j = i + 1; j < n; j++)
            x[i] -= aug[i][j] * x[j];
        x[i] /= aug[i][i];
    }

    printf("\n%sSolution:%s\n", GREEN, RESET);
    for (int i = 0; i < n; i++)
        printf("  x%d = %.6f\n", i + 1, x[i]);

    k_signature();
    return 0;
}
