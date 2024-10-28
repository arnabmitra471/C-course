#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat1[5][5], mat2[5][5], sum_mat[5][5];
    int i, j, rows1, cols1, rows2, cols2, res_rows, res_cols;

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &rows1);

    printf("\n Enter the number of columns in the first matrix: ");
    scanf("%d", &cols1);

    printf("\n Enter the number of rows in the second matrix: ");
    scanf("%d", &rows2);

    printf("\n Enter the number of columns in the second matrix: ");
    scanf("%d", &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("\n The number of rows and columns must be equal in both the matrices");
        exit(1);
    }
    else
    {
        printf("\n Enter the elements of the first matrix: ");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n Enter the elements of the second matrix: ");
        for (i = 0; i < rows2; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        res_rows = rows1;
        res_cols = cols1;

        for (i = 0; i < res_rows; i++)
        {
            for (j = 0; j < res_cols; j++)
            {
                sum_mat[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        printf("The elements of the resultant matrix are: \n");
        for(i=0;i<res_rows;i++)
        {
            for(j=0;j<res_cols;j++)
            {
                printf("\t %d",sum_mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}