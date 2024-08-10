// A program that reads number N and display the Pyramid of Number.
/*
1 2 3     1 1 1   * * *
1 2 3     2 2 2   * * *
1 2 3     3 3 3   * * *
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
        for(col=1; col<=n; col++)
        {
            printf("%d ",col);
            // printf("%d ",row);
            // printf("* ");
        }
        printf("\n");
    }


    getch();
}



