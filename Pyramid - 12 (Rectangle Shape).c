// A program that reads number N and display the Pyramid.
/*
   ****
   *  *
   *  *
   ****
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
            (row==1||row==n||col==1||col==n)?printf("*"):printf(" ");
            /*
            if(row==1 || row==n || col==1 || col==n)
                printf("*");

            else
                printf(" ");
            */
        }

        printf("\n");
    }



    getch();
}