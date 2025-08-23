// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int a;
    printf("Radius ");
    scanf("%d",&a);
    int Area , Circumference ;
    Area=3.14*a*a;
    Circumference=2*3.14*a;
    printf("Area= %d \n", Area);
    printf("Circumference= %d \n", Circumference);
    return 0;

}