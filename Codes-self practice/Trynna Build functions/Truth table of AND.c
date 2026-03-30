#include <stdio.h>

int main(void) {
    int p, q;

    printf("Truth table of logical AND (&&)\n");
    printf("-----------------------------\n");
    printf("P Q | P&&Q\n");
    printf("-----------------------------\n");

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            printf("%d %d |   %d\n", p, q, p && q);
        }
    }

    return 0;
}
