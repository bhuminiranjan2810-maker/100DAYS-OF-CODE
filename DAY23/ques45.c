//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    float numerator = 2.0, denominator = 3.0, sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}

