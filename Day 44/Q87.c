//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
        else if (ch != '\n' && ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) == 0)
            special++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d", spaces, digits, special);
    return 0;
}
