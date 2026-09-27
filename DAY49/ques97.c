//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your initials are: ");
    if (name[0] != ' ' && name[0] != '\0' && name[0] != '\n') {
        printf("%c", toupper(name[0]));
    }
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            if (name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
                printf(" %c", toupper(name[i + 1]));
            }
        }
    }
    printf("\n");
    return 0;
}