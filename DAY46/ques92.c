//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

char findFirstRepeating(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                return str[i];
            }
        }
    }
    return '\0'; 
}

int main() {
    char str[] = "abcdefbcz";
    char result = findFirstRepeating(str);
    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", result);
    } else {
        printf("No repeating lowercase alphabets found.\n");
    }
    return 0;
}
