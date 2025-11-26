/*
Write a program to take an array arr[] of integers as input, and find the previous greater element 
for each element in order of their appearance. 
Previous greater element is the nearest element on the left that is greater than the current element. 
If none exists, print -1. 
Print output in comma separated fashion. 
Do not use stack; use brute force (nested loop).
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], ans[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        ans[i] = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                ans[i] = arr[j];
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if(i != n - 1) printf(",");
    }

    return 0;
}
