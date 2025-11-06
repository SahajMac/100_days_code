//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, bin[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary: 0");
        return 0;
    }
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);
    return 0;
}
