// A program that show the Absolute Value of a Number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x;

    printf("Enter the Number : ");
    scanf("%d", &n);

    if(n<0)
        x=n*(-1);

    printf("\nAbsolute value of %d is = %d\n", n, x);


    getch();
}


