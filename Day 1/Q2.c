// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int A;
    printf("First Number ");
    scanf("%d",&A);
    int B;
    printf("Second Number ");
    scanf("%d",&B);

    int sum,difference,product,quotient;
    sum=A+B;
    difference=A-B;
    product=A*B;
    quotient=A/B;

    printf("sum=%d \n",sum);
    printf("difference=%d \n",difference);
    printf("product=%d \n",product);
    printf("quotient=%d \n",quotient);
    return 0;

}