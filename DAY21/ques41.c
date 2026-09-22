//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, originalNum, swappedNum;
    int firstDigit , lastDigit;
    int count = 0;
    int multiplier = 1;
    printf("Enter any integer: ");
    scanf("%d", &num);

    originalNum = num;
    lastDigit = num % 10;
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    firstDigit = temp;
    swappedNum = num - (firstDigit * multiplier) - lastDigit;
    swappedNum = swappedNum + (lastDigit * multiplier) + firstDigit;
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping: %d\n", swappedNum);
    return 0;
}
