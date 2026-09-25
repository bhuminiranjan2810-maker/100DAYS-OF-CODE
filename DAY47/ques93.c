//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[50] = {0};
    int count2[50] = {0};
    int i;
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams.\n");
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    for (i = 0; i < 50; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams!\n");
    return 0;
}