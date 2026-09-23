//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[] = "hello world"
    char ch = 'l';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' appears %d times.\n", ch, count);

    return 0;
}
