// A program thats reads Value of Column and Row and shows the Matrix. After that Shows the Diagonal Elements form the Matrix and their Sum.6
#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[99][99], row, col, i, j, sum=0;

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




    printf("\n\nDiagonal Elements are = \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i==j)
            {
                printf("%d ",matrix[i][j]);
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("\n\n");
    printf("Sum of the Diagonal Elements = %d\n",sum);





    getch();
}



