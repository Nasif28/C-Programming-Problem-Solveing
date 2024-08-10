// A program reads a Number N and display the Pyramid of Binary.
/*
1         1
1 0       0 0
1 0 1     1 1 1
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
            printf("%d ",col%2);
           // printf("%d ",row%2);
        }
        printf("\n");
    }

    getch();
}


