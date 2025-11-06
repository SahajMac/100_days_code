//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    printf("Diagonal traversal:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (i == j)
                printf("%d ", mat[i][j]);
    return 0;
}
