// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int T,H,M,S;
    printf("Enter Time: ");
    scanf("%d",&T);
    H=T/3600;
    M=(T%3600)/60;
    S=(T%60);
    printf("Housr: %d, Minutes: %d, Second: %d" ,H,M,S);
    return 0;


}