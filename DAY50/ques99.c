//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[11];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);
    for (int i = 0; date[i] != '\0'; i++) {
        if (date[i] == '/') {
            date[i] = '-';
        }
    }
    printf("Converted Date: %s\n", date);
    return 0;
}
