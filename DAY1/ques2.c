//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main() {
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f %f",&a,&b);
    printf("Sum = %f",a+b);
    printf("Difference = %f",a-b);
    printf("Product = %f",a*b);
     printf("Quotient = %f",a/b);

    return 0;
}