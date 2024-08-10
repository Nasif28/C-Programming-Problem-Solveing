// A program to determine and print the sum of the following Harmonic series for the given value of N.
// S = 1 + 1/2 + 1/3 + .... + 1/n
#include<stdio.h>
#include<conio.h>
int main()
{
    double n,i,sum=0;

    printf("Enter the value of N : ");
    scanf("%lf",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + 1/i;

        if(i==1)
            printf("1 + ");

        else if(i==n)
            printf("1/%.0lf",i);

        else
            printf("1/%.0lf + ",i);
    }

    printf(" = %.2lf",sum);


    getch();
}

