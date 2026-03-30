// ---------------------------------------------------------
// Descriptive Statistics
// Author: Keshu
// ---------------------------------------------------------
// Covers: Mean, Median, Mode, Variance, Std Deviation,
//         Min, Max, Range
// Uses: k_mean() and k_stddev() from keshu_core.h
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

#define MAX 100

void bubble_sort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                double tmp = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = tmp;
            }
}

double median(double sorted[], int n) {
    if (n % 2 == 0)
        return (sorted[n/2 - 1] + sorted[n/2]) / 2.0;
    return sorted[n / 2];
}

double mode(double sorted[], int n) {
    double mode_val = sorted[0];
    int max_count = 1, count = 1;
    for (int i = 1; i < n; i++) {
        count = (sorted[i] == sorted[i - 1]) ? count + 1 : 1;
        if (count > max_count) {
            max_count = count;
            mode_val  = sorted[i];
        }
    }
    return mode_val;
}

int main() {
    int n;
    double arr[MAX], sorted[MAX];

    printf("%sDescriptive Statistics%s\n\n", CYAN, RESET);
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        printf("  [%d]: ", i + 1);
        scanf("%lf", &arr[i]);
        sorted[i] = arr[i];
    }

    bubble_sort(sorted, n);

    double mean   = k_mean(arr, n);
    double stddev = k_stddev(arr, n);
    double var    = stddev * stddev;
    double med    = median(sorted, n);
    double mod    = mode(sorted, n);
    double minv   = sorted[0];
    double maxv   = sorted[n - 1];

    printf("\n%sResults:%s\n", GREEN, RESET);
    printf("  Mean                : %.4f\n", mean);
    printf("  Median              : %.4f\n", med);
    printf("  Mode                : %.4f\n", mod);
    printf("  Variance  (σ²)      : %.4f\n", var);
    printf("  Std Deviation (σ)   : %.4f\n", stddev);
    printf("  Min                 : %.4f\n", minv);
    printf("  Max                 : %.4f\n", maxv);
    printf("  Range (max - min)   : %.4f\n", maxv - minv);

    k_signature();
    return 0;
}
