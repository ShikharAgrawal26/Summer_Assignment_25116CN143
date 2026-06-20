#include<stdio.h>
int main()
{
    int mat1[10][10], colsum[10][10];
    int r, c;
    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += mat1[i][j];
        }
        colsum[j][0] = sum;
    }
    printf("Sum of each column is:\n");
    for (int j = 0; j < c; j++) {
        printf("Column %d sum: %d\n", j, colsum[j][0]);
    }
    return 0;
}