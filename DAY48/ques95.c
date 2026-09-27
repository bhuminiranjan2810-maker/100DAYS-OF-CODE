//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    char temp[201];
    sprintf(temp, "%s%s", str1, str1);
    return (strstr(temp, str2) != NULL);
}

int main() {
    char s1[100];
    char s2[100];
    printf("Enter the first string: ");
    scanf("%99s", s1);
    printf("Enter the second string: ");
    scanf("%99s", s2);
    if (isRotation(s1, s2)) {
        printf("RESULT: Yes, '%s' is a rotation of '%s'.\n", s2, s1);
    } else {
        printf("RESULT: No, '%s' is NOT a rotation of '%s'.\n", s2, s1);
    }
    return 0;
}
