//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}
void reverseEachWord(char *str) {
    char *word_start = str;
    char *temp = str;
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_start, temp - 1);
        } else if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseEachWord(str);
    printf("Reversed words: %s\n", str);
    return 0;
}