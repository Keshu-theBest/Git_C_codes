// ---------------------------------------------------------
// Triangle Solver using Law of Sines & Law of Cosines
// Author: Keshu
// ---------------------------------------------------------
// Given any 3 known values (sides/angles), solve the triangle.
//   SSS → 3 sides given     → find all angles (Law of Cosines)
//   SAS → 2 sides + angle   → find remaining side & angles
//   ASA → 2 angles + 1 side → find remaining angles & sides
//
// Formulas:
//   Law of Cosines:  a² = b² + c² - 2bc·cos(A)
//   Law of Sines:    a/sin(A) = b/sin(B) = c/sin(C)
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

#define DEG2RAD (M_PI / 180.0)
#define RAD2DEG (180.0 / M_PI)

int main() {
    int choice;
    double a, b, c, A, B, C;

    printf("%sTriangle Solver%s\n\n", CYAN, RESET);
    printf("1. SSS  — 3 sides given\n");
    printf("2. SAS  — 2 sides + included angle\n");
    printf("3. ASA  — 2 angles + included side\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // SSS: use Law of Cosines to find each angle
        printf("Enter sides a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        A = acos((b*b + c*c - a*a) / (2*b*c)) * RAD2DEG;
        B = acos((a*a + c*c - b*b) / (2*a*c)) * RAD2DEG;
        C = 180.0 - A - B;

    } else if (choice == 2) {
        // SAS: sides a, c and included angle B
        printf("Enter side a, angle B (degrees), side c: ");
        scanf("%lf %lf %lf", &a, &B, &c);
        // Law of Cosines: b² = a² + c² - 2ac·cos(B)
        b = sqrt(a*a + c*c - 2*a*c*cos(B * DEG2RAD));
        // Law of Sines for A
        A = asin(a * sin(B * DEG2RAD) / b) * RAD2DEG;
        C = 180.0 - A - B;

    } else if (choice == 3) {
        // ASA: angles A and C, side b (between them)
        printf("Enter angle A (deg), side b, angle C (deg): ");
        scanf("%lf %lf %lf", &A, &b, &C);
        B = 180.0 - A - C;
        // Law of Sines for remaining sides
        a = b * sin(A * DEG2RAD) / sin(B * DEG2RAD);
        c = b * sin(C * DEG2RAD) / sin(B * DEG2RAD);

    } else {
        printf("%sInvalid choice.%s\n", RED, RESET);
        return 1;
    }

    // Area = (1/2) * a * b * sin(C)
    double area = 0.5 * a * b * sin(C * DEG2RAD);

    printf("\n%sSolved Triangle:%s\n", GREEN, RESET);
    printf("  Sides  :  a = %.4f,  b = %.4f,  c = %.4f\n", a, b, c);
    printf("  Angles :  A = %.4f°, B = %.4f°, C = %.4f°\n", A, B, C);
    printf("  Angle sum = %.4f° (should be 180°)\n", A + B + C);
    printf("  Area      = %.4f sq. units\n", area);
    printf("  Perimeter = %.4f\n", a + b + c);

    k_signature();
    return 0;
}
