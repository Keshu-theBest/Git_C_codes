// ---------------------------------------------------------
// Inverted Right Triangle Pattern
// Author: Keshu
// ---------------------------------------------------------
// * * * * *
// * * * *
// * * *
// * *
// *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
