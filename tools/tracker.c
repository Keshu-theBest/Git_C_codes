#include <stdio.h>
#include <stdlib.h>
#include "../include/keshu_core.h" // Use your library for colors!

int main() {
    // 1. Print the Header using your library colors
    printf("\n%s[ MISSION CONTROL ] Scanning for Incomplete Protocols...%s\n", CYAN, RESET);
    printf("----------------------------------------------------------\n");

    // 2. The "System" Call
    // This allows C to talk to the Linux Terminal.
    // We run the grep command directly from C.
    // -r = recursive, -n = line numbers, --include=*.c = only C files
    int status = system("grep -r -n --color=always --include='*.c' '\\[INCOMPLETE\\]' .");

    // 3. Logic Check
    printf("----------------------------------------------------------\n");
    if (status == 0) {
        printf("%s>> ALERT: Unfinished missions detected.%s\n", RED, RESET);
    } else {
        printf("%s>> SYSTEM CLEAR: All missions complete.%s\n", GREEN, RESET);
    }

    // 4. Drop the signature
    k_signature();
    
    return 0;
}