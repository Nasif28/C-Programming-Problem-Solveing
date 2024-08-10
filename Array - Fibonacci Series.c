// A program that read value of N and shows the Fibonacci Series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[999],n,i;

    printf("Enter N = ");
    scanf("%d",&n);

    num[0] = 0;
    num[1] = 1;

    for(i=2; i<n; i++)
    {
        num[i] = num[i-1] + num[i-2];
    }

    printf("Fibonacci Series = ");


    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }



    getch();
}

