//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()
{
    float cp, sp, p;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if(sp > cp)
    {
        p = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", p);
    }
    else if(cp > sp)
    {
        p = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", p);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}