/*
Write a program to take an integer array arr and an integer k as inputs. 
Find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces.
*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > maxVal)
                maxVal = arr[j];
        }
        printf("%d ", maxVal);
    }

    return 0;
}


