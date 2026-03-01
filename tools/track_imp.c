#include <stdio.h>
#include <stdlib.h>
#include "../include/keshu_core.h" // Access to your library

int main() {
    // 1. Gold Header for "Important" items
    printf("\n%s[ PRIORITY SCAN ] Searching for [IMPORTANT] Tags...%s\n", YELLOW, RESET);
    printf("----------------------------------------------------------\n");

    // 2. The Grep Command
    // detailed scan for the specific tag
    int status = system("grep -r -n --color=always --include='*.c' '\\[IMPORTANT\\]' .");

    printf("----------------------------------------------------------\n");

    // 3. Status Report
    if (status == 0) {
        // Found important tags
        printf("%s>> PRIORITY INTEL LOCATED.%s\n", YELLOW, RESET);
    } else {
        // Nothing found
        printf("%s>> SYSTEM CLEAR: No priority tasks pending.%s\n", GREEN, RESET);
    }

    // 4. Signature
    k_signature();
    
    return 0;
}