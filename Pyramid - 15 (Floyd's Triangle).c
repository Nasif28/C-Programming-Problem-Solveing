// A program that reads number N and display the Pyramid.
/*
   1
   2 3
   4 5 6
   7 8 9 10
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,col,row,count=0;

    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
         printf("%d ",++count);
        }

        printf("\n");
    }



    getch();
}
