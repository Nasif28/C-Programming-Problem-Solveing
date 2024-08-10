// A program that reads Number of Column and Row and shows the Matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int A[99][99],B[99][99],n1,n2,i,j;

    printf("Enter How many Column and Row you want : \n");
    scanf("%d %d",&n1, &n2);

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



    printf("\n\n");
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





    getch();
}


