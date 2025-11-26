/*
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
Find two distinct indices i and j such that nums[i] + nums[j] equals the target. 
Assume exactly one solution exists. Print the indices separated by a space. 
If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        printf("-1 -1");

    return 0;
}
