// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int a;
    printf("length ");
    scanf("%d",&a);
    int b;
    printf("widht ");
    scanf("%d",&b);
    int Perimeter;
    Perimeter=2*(a+b);
    printf("Perimeter= %d \n", Perimeter);
    int Area;
    Area=a*b;
    printf("Area= %d \n",Area);
    return 0; 
}