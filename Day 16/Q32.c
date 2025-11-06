//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (n == rev)
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
    return 0;
}
