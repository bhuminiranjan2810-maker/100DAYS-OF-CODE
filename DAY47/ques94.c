//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char *word, *longest;
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);
    word = strtok(str, " \n");
    longest = word;
    while (word != NULL)
    {
        if (strlen(word) > strlen(longest))
        {
            longest = word;
        }
        word = strtok(NULL, " \n");
    }
    printf("Longest word = %s", longest);
    return 0;
}