//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[500];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && str[i] != '\n') {
            special++;
        }
        i++;
    }
    printf("\nSpaces: %d", spaces);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);
    return 0;
}
