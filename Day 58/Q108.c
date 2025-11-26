/*
Write a Program to take an integer array nums. 
Print an array answer such that answer[i] is the product of all elements of nums except nums[i]. 
The product of any prefix or suffix of nums fits in a 32-bit integer.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int zeroCount = 0, product = 1;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) zeroCount++;
        else product *= nums[i];
    }

    for(int i = 0; i < n; i++) {
        if(zeroCount > 1) {
            answer[i] = 0;
        } else if(zeroCount == 1) {
            if(nums[i] == 0) answer[i] = product;
            else answer[i] = 0;
        } else {
            answer[i] = product / nums[i];
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
