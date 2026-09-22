//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive");
    else if (num < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}