// A program that Transpose the Matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[99][99], transpose[99][99], row, col, i, j;

    printf("Enter Number of Row and Column for Matrix = ");
    scanf("%d %d",&row,&col);



    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");




    printf("\n\nMatrix = \n");
    for(i=0; i<row; i++)
    {
        printf("\t\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");




for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\n");




       printf("\n\nTranspose Matrix = \n");
    for(i=0; i<col; i++)
    {
        printf("\t\t");
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n");





    getch();
}


