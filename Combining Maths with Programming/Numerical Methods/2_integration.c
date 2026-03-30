// ---------------------------------------------------------
// Numerical Integration: Trapezoidal Rule & Simpson's 1/3 Rule
// Author: Keshu
// ---------------------------------------------------------
// Test case: ∫₀^π sin(x) dx  →  exact answer = 2.0
// More intervals = more accuracy
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

// --- Change this function to integrate anything ---
double f(double x) { return sin(x); }

// Trapezoidal rule: ∫ ≈ (h/2)[f(a) + 2f(x₁) + 2f(x₂) + ... + f(b)]
double trapezoidal(double (*func)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);
    for (int i = 1; i < n; i++)
        sum += 2.0 * func(a + i * h);
    return (h / 2.0) * sum;
}

int main() {
    double a = 0, b = M_PI;
    int n;

    printf("%sNumerical Integration of sin(x) from 0 to π%s\n", CYAN, RESET);
    printf("Exact answer = 2.0000000000\n\n");

    // Show how accuracy improves with more intervals
    printf("%s%-8s  %-20s  %-10s  %-20s  %-10s%s\n",
           YELLOW, "n", "Trapezoidal", "Error", "Simpson's", "Error", RESET);

    int test_n[] = {2, 4, 10, 50, 100, 1000};
    for (int i = 0; i < 6; i++) {
        n = test_n[i];
        double trap = trapezoidal(f, a, b, n);
        double simp = k_integrate_simpson(f, a, b, n);
        printf("%-8d  %-20.10f  %-10.2e  %-20.10f  %-10.2e\n",
               n, trap, fabs(trap - 2.0), simp, fabs(simp - 2.0));
    }

    printf("\n%sSimpson's rule converges much faster (O(h⁴) vs O(h²)).%s\n",
           GREEN, RESET);

    k_signature();
    return 0;
}
