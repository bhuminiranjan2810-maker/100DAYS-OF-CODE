//Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);


    while(str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

   
    while(i < j)
    {
        if(str[i] != str[j])
        {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if(palindrome == 1)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}