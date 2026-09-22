//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[] = "Hello world this is C";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}
