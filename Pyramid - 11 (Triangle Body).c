// A program that reads number N and display the Pyramid.
/*
  1         1       *     1 2 3      1
 1 2       2 2     * *     1 2     1 2 3
1 2 3     3 3 3   * * *     1    1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col;

    printf("Enter N = ");
    scanf("%d",&n);

    // for(row=n; row>=1; row--)
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
//for(col=1; col<=2*row-1; col++)
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);

        }

        printf("\n");

    }


    getch();
}


