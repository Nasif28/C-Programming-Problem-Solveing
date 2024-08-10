// A program thats read range of 2 Dimension and shows the Array result.
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[99][99],n1,n2,i,j;

    printf("Enter number of First Dimension and Second Dimension : \n");
    scanf("%d %d",&n1, &n2);

    printf("Enter those Numbers : \n");

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    printf("Array : \n");

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }




    getch();
}


