//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, temp, digit, i, maxDigit, maxCount;
    int count[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }
    maxDigit = 0;
    maxCount = count[0];
    for (i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("Digit that occurs most: %d (occurs %d times)", maxDigit, maxCount);
    return 0;
}
