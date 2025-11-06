//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
            str[j++] = ch;
    }
    str[j] = '\0';
    printf("String without vowels: %s", str);
    return 0;
}
