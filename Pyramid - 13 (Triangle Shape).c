// A program that reads number N and display the Pyramid.
/*
   *
   * *
   *  *
   *****
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,col,row;

    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            (col==1||row==n||col==row)?printf("*"):printf(" ");
            /*
            if(col==1 || row==n || col==row)
                printf("*");

            else
                printf(" ");
            */
        }

        printf("\n");
    }



    getch();
}
