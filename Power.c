// A program that take the value of X and Y, shows x raised to the power y (x^y).
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    double result;

    printf("Enter value of x = ");
    scanf("%d",&x);

    printf("Enter value of y = ");
    scanf("%d",&y);

    result = pow(x,y);

    printf("%.2lf",result);


    getch();
}

