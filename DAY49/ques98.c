//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, last_space = -1;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }
    if (last_space == -1) {
        printf("%s\n", name);
        return 0;
    }
    if (name[0] >= 'a' && name[0] <= 'z') {
        printf("%c. ", name[0] - 32); // Convert to uppercase manually
    } else if (name[0] >= 'A' && name[0] <= 'Z') {
        printf("%c. ", name[0]);
    }
    for (i = 0; i < last_space; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            char ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z') {
                printf("%c. ", ch - 32);
            } else if (ch >= 'A' && ch <= 'Z') {
                printf("%c. ", ch);
            }
        }
    }
    printf("%s\n", &name[last_space + 1]);
    return 0;
}
