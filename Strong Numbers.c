// A program that takes a Range of Number and shows the Strong Numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num,rem,fact,sum,i,r,x;

    printf("Enter the First Number : ");
    scanf("%d",&n);

    printf("Enter the Last Number : ");
    scanf("%d",&num);

    printf("Strong Numbers are : ");

    for(r=n; r<=num; r++)
    {
        sum=0;
        x=r;

        while(x!=0)
        {
            fact=1;

            rem = x % 10;

            for(i=1; i<=rem; i++)
            {
                fact = fact*i;
            }

            sum = sum + fact;
            x = x/10;

        }

        if(sum==r)
            printf("%d ",sum);

    }



    getch();
}


