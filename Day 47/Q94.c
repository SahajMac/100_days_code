//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, len = 0, maxLen = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            len = 0;
        }
        i++;
    }
    if (len > maxLen) {
        word[len] = '\0';
        strcpy(longest, word);
    }
    printf("Longest word: %s", longest);
    return 0;
}
