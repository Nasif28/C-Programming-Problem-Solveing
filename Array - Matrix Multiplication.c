// A program thats Multiplied 2 Matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int first[99][99], second[99][99], result[99][99], sum=0, r1, r2, c1, c2, i, j, k;

    printf("Enter Number of Row and Column for First Matrix = ");
    scanf("%d %d",&r1,&c1);
    printf("Enter Number of Row and Column for Second Matrix = ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!\n");
        printf("Column of First Matrix and Row of Second Matrix are not Equal.\n");

        printf("Enter Number of Row and Column for First Matrix = ");
        scanf("%d %d",&r1,&c1);
        printf("Enter Number of Row and Column for Second Matrix = ");
        scanf("%d %d",&r2,&c2);
        printf("\n");
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\n");


    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf("\n");


    printf("\n\nFirst Matrix = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("\n\nSecond Matrix = \n");
    for(i=0; i<r2; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }


  printf("\n\nResult of Matrix = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    printf("\n");




    getch();
}

