//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    int i = 0, j, len;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        len = j;
        for (j = len - 1; j >= 0; j--)
            printf("%c", word[j]);
        if (str[i] == ' ')
            printf(" ");
        if (str[i] != '\0')
            i++;
    }
    return 0;
}

