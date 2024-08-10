// A program reads a Number N and display the Pyramid of Reverse Alphabetic.
/*
1 2 3     3 3 3    A B C   * * *
1 2       2 2      A B     * *
1         1        A       *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col;

    printf("Enter N = ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);
            //printf("%c ",row+64);
            //printf("%c ",col+96);
            // printf("%c ",row+96);
        }
        printf("\n");
    }

    getch();
}



