// A program to determine and print the sum of the following series for the given value of N.
// sum = 1-2+3-4+5-6+....
// sum = (1+3+5+...) - (2+4+6+...)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,even=0,odd=0;

    printf("Enter the Last Number of the Series = ");
    scanf("%d",&n);

    printf("1-2+3-4+....%d",n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even = even + i;

        else
            odd = odd + i;
    }

    printf(" = %d",odd-even);


    getch();
}
