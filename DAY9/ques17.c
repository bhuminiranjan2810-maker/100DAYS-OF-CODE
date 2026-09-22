//Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>

int main()
{
    int a, b, c, d, i;
    float r1, r2;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        for(i = 0; i*i <= d; i++);

        i = i - 1;

        r1 = (-b + i) / (2.0*a);
        r2 = (-b - i) / (2.0*a);

        printf("Real and different roots\n");
        printf("Roots = %.2f, %.2f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2.0*a);

        printf("Real and equal roots\n");
        printf("Root = %.2f", r1);
    }
    else
    {
        printf("Complex roots");
    }

    return 0;
}