// A program to determine and print the sum of the following series for the given value of N.
// S = 1+2+3+.....+n
// S = 2+4+6+.....+n
// S = 1+3+5+.....+n
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the Last Number of the Series = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        //for(i=2; i<=n; i=i+2)
        //for(i=1; i<=n; i=i+2)

    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\nSum = %d\n",sum);


    getch();
}
