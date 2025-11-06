//Write a program to find profit or loss percentage given cost price and selling price

#include <stdio.h>

int main() {
    float cp, sp, percent;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit percentage: %.2f%%", percent);
    } else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss percentage: %.2f%%", percent);
    } else
        printf("No profit, no loss");
    return 0;
}
