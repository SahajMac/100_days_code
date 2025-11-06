//Find the sum of main diagonal elements for a square matrix

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (i = 0; i < n; i++)
        sum += mat[i][i];
    printf("Sum of main diagonal elements: %d", sum);
    return 0;
}
