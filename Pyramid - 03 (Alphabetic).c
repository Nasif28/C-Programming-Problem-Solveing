// A program reads a Number N and display the Pyramid of Alphabetic.
/*
A         A
A B       B B
A B C     C  C C
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
            printf("%c ",col+64);
            //printf("%c ",row+64);
            //printf("%c ",col+96);
            // printf("%c ",row+96);
        }
        printf("\n");
    }

    getch();
}



