// A program to determine and print the Sum of the following series for the given value of N.
// S = 1+2+3+4+....+N.
// S = 1.5+2.5+3.5+4.5+....+N.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i; //a=1

    printf("Enter the Last Number of the Series = ");
    scanf("%d",&n);

    printf("1+2+3+....+%d",n);

    /*
    while(a<=n)
    {
        sum = sum + a;
        a = a + 1;
        }
    */

    for(i=1; i<=n; i=i++)
    {
        sum = sum + i;
    }
    printf(" = %d\n",sum);

    /*
    For Series S = 1+3+5+7+....+N.
    Increase i=i+2
    */


    getch();
}
