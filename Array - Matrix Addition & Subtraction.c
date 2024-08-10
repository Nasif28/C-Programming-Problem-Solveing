// A program thats Shows the Addition and Subtraction of a Matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int A[99][99],B[99][99],C[99][99],D[99][99],n1,n2,i,j;

    printf("Enter the Number of rows and columns : \n");
    scanf("%d %d",&n1, &n2);

    printf("\n\n");
    printf("Enter Elements for A Matrix : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("Enter Elements for B Matrix : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");
    printf("A = ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("B = ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }



    printf("\n\n");
    for(i=0; i<n1; i++)
    {

        for(j=0; j<n2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

        printf("\n");
        printf("A + B = ");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
            printf("\t");
        }



            printf("\n");
    for(i=0; i<n1; i++)
    {

        for(j=0; j<n2; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
        }
    }

        printf("\n");
        printf("A - B = ");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d ",D[i][j]);
            }
            printf("\n");
            printf("\t");
        }




    getch();
}

