// A program that reads number N and display the Pyramid of Number.
/*
    1
    2 4
    3 6 9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col;

    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col*row);
            // printf("%d ",row);
            // printf("* ");
        }
        printf("\n");
    }


    getch();
}




