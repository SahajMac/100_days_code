// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    int a;
    printf("Temp in Celsius ");
    scanf("%d",&a);
    int Fahrenheit;
    Fahrenheit=(a*1.8)+32;
    printf("Fahrenheit= %d \n", Fahrenheit);
    return 0;
    
}