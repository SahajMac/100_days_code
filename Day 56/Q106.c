/*
Write a program to take an array arr[] of integers as input, the task is to find the next greater element 
for each element of the array in order of their appearance. 
Next greater element is the nearest element on the right which is greater than the current element. 
If none exists, print -1. 
Print the output in comma separated fashion. 
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
        for(int j = i + 1; j < n; j++) {
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
