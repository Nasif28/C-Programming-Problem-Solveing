// A program that reads a number N and shows the Factorial of N.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,fact=1;

    printf("Enter any Number = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is = %d\n",n,fact);


    getch();
}
