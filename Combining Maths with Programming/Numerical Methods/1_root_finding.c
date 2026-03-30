// ---------------------------------------------------------
// Root Finding: Bisection Method & Newton-Raphson
// Author: Keshu
// ---------------------------------------------------------
// Demo function: f(x) = x³ - x - 2  (root ≈ 1.5214)
// Change f(x) and df(x) below to try any function you like
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

// --- Edit these two functions to change the equation ---
double f(double x)  { return x*x*x - x - 2; }   // f(x)
double df(double x) { return 3*x*x - 1; }        // f'(x)  (for Newton-Raphson)

int main() {
    int choice;
    printf("%sRoot Finding Methods%s\n", CYAN, RESET);
    printf("f(x) = x³ - x - 2\n\n");
    printf("1. Bisection Method\n2. Newton-Raphson\n");
    printf("Choose: ");
    scanf("%d", &choice);

    double tol = 1e-6;

    if (choice == 1) {
        // ---- Bisection Method ----
        // Requires: f(a)*f(b) < 0  (root is bracketed)
        double a, b;
        printf("Enter interval [a, b]: ");
        scanf("%lf %lf", &a, &b);

        if (f(a) * f(b) > 0) {
            printf("%sNo root guaranteed — f(a) and f(b) have same sign.%s\n", RED, RESET);
            return 1;
        }

        int iter = 0;
        double mid;
        printf("\n%s%-5s  %-12s  %-12s  %-12s  %-12s%s\n",
               YELLOW, "Iter", "a", "b", "mid", "f(mid)", RESET);

        while ((b - a) / 2.0 > tol) {
            mid = (a + b) / 2.0;
            printf("%-5d  %-12.6f  %-12.6f  %-12.6f  %-12.6f\n",
                   ++iter, a, b, mid, f(mid));
            if (fabs(f(mid)) < tol) break;
            if (f(a) * f(mid) < 0) b = mid;
            else                   a = mid;
        }
        printf("\n%sRoot ≈ %.8f  (after %d iterations)%s\n",
               GREEN, (a + b) / 2.0, iter, RESET);

    } else if (choice == 2) {
        // ---- Newton-Raphson Method ----
        // Formula: x_new = x - f(x)/f'(x)
        double x;
        printf("Enter initial guess x₀: ");
        scanf("%lf", &x);

        printf("\n%s%-5s  %-18s  %-18s%s\n", YELLOW, "Iter", "x", "f(x)", RESET);

        for (int i = 1; i <= 100; i++) {
            double fx  = f(x);
            double dfx = df(x);
            printf("%-5d  %-18.10f  %-18.10f\n", i, x, fx);

            if (fabs(dfx) < 1e-12) {
                printf("%sDerivative ≈ 0 — method fails here.%s\n", RED, RESET);
                break;
            }
            double x_new = x - fx / dfx;
            if (fabs(x_new - x) < tol) { x = x_new; break; }
            x = x_new;
        }
        printf("\n%sRoot ≈ %.10f%s\n", GREEN, x, RESET);

    } else {
        printf("%sInvalid choice.%s\n", RED, RESET);
    }

    k_signature();
    return 0;
}
