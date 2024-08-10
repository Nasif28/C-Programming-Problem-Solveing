// A program that reads a number N and displays the total Prime Numbers from 2 to N.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,p=0,m;

    printf("Enter a Number = ");
    scanf("%d",&n);

    for(m=2; m<=n; m++)
    {
        p=0;

        for(i=2; i<m; i++)
        {
            if(m%i==0)
            {
                p=1;
            }
        }
        if(p!=1)
            printf(" %d",m);

    }



    getch();
}

