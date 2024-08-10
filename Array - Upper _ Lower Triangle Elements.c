// A program thats shows the Upper Sum and Lower Sum of a Matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[99][99], row, col, i, j, uppersum=0, lowersum=0;

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




    printf("\n\nUpper & Lower Triangles Elements are = \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i<j)
            {
                printf("%d ",matrix[i][j]);
                uppersum = uppersum + matrix[i][j];
            }

            if(i>j)
            {
                printf("%d ",matrix[i][j]);
                lowersum = lowersum + matrix[i][j];
            }
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Sum of Upper Triangle Elements = %d\n",uppersum);
    printf("Sum of Lower Triangle Elements = %d\n",lowersum);





    getch();
}




