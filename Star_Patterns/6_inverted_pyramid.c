// ---------------------------------------------------------
// Inverted Full Pyramid Pattern
// Author: Keshu
// ---------------------------------------------------------
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
