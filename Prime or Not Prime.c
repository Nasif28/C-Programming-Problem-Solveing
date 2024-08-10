// A program that reads a number N and checks it is Prime or Not Prime.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,p;

    printf("Enter a Number = ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=1;
        }
    }

    if(p!=1)
        printf("The Number is a Prime Number.");

    else
        printf("The Number is not a Prime Number.");



    getch();
}
