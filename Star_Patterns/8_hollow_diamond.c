// ---------------------------------------------------------
// Hollow Diamond Pattern
// Author: Keshu
// ---------------------------------------------------------
//         *
//       *   *
//     *       *
//   *           *
// *               *
//   *           *
//     *       *
//       *   *
//         *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows (upper half): %s", CYAN, RESET);
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) {
            // Only print stars on left and right border
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
