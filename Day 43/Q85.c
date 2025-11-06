//Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = 0;
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s", str);
    return 0;
}
