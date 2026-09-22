//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
