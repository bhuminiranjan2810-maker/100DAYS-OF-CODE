//Write a program to check if a number is a strong number.
#include <stdio.h>

int getFactorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, rem;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        rem = num % 10; 
        sum += getFactorial(rem);
        num = num / 10;
    }
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }
    return 0;
}
