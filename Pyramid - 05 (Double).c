// A program reads a Number N and display the Double Pyramid.
/*
1          1
1 2        2 2
1 2 3      3 3 3
1 2        2 2
1          1
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
            printf("%d ",col);
            //  printf("%c ",col+64);
        }
        printf("\n");
    }


    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
            // printf("%c ",col+64);
        }
        printf("\n");
    }


    getch();
}
