//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    printf("Sum of all elements: %d", sum);
    return 0;
}
