// A program to determine and print the Multiplication of the following series for the given value of N.
// S = 1^2 * 2^2 * 3^2 * 4^2 * .... * N^2.
// S = 1^3 * 2^3 * 3^3 * 4^3 * .... * N^3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,mul=1,i;

    printf("Enter the Last Number of the Series = ");
    scanf("%d",&n);

    printf("1^2 * 2^2 * 3^2 * .... * %d^2",n);

    for(i=1; i<=n; i++)
    {
        mul = mul * i*i;
    }
    printf(" = %d\n",mul);

    /*
    For Series S = 1^2 * 3^2 * 5^2 * 7^2 * ....* N^2.
    Increase i=i+2
    */


    getch();
}


