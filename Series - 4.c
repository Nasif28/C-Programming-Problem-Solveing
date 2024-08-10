// A program to determine and print the sum of the following series for the given value of N.
// S = 1^2 + 2^2 + 3^2 + .... + n^2
// S = 1^3 + 2^3 + 3^3 + .... + n^3
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter the Last Number of the Series = ");
    scanf("%d",&n);

    printf("1^2 + 2^2 + 3^2 +....+%d^2",n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i*i;
        // sum = sum + i*i*i;
    }

    printf(" = %d\n",sum);


    getch();
}
