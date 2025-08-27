// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main(){
    char c;
    printf("Enter a Letter: ");
    scanf("%c",&c);
    if (c>='a' & c<='z'){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("It is a vowel");
        }else{
            printf("it is a consonant"); }
    }
    return 0;
}
