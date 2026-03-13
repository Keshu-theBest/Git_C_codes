// ---------------------------------------------------------
// Right-Aligned Triangle Pattern
// Author: Keshu
// ---------------------------------------------------------
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++)
            printf("  ");
        // Print stars
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    k_signature();
    return 0;
}
