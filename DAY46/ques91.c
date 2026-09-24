//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; 
    printf("String after removing vowels: %s", str);
    return 0;
}