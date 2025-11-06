//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch (op) {
        case '+': printf("Result: %.2f", a + b); break;
        case '-': printf("Result: %.2f", a - b); break;
        case '*': printf("Result: %.2f", a * b); break;
        case '/': 
            if (b != 0) printf("Result: %.2f", a / b);
            else printf("Division by zero not allowed");
            break;
        case '%': 
            if ((int)b != 0) printf("Result: %d", (int)a % (int)b);
            else printf("Division by zero not allowed");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
