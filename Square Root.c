// A program that read a number and show the Square Root of the Number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;

    printf("Enter any number = ");
    scanf("%d",&n);

    double result = sqrt(n);

    printf("The Square Root of %d is = %.2lf",n,result);


    getch();
}

