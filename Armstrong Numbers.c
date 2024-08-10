// A program that displays all the Armstrong Number.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int num1,num2,temp,r,sum=0,i;

    printf("Enter the First Number : ");
    scanf("%d",&num1);

    printf("Enter the Last Number : ");
    scanf("%d",&num2);

    for(i=num1; i<=num2; i++)
    {
        temp = i;

        while(temp!=0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ",i);

        sum = 0;
    }


    getch();
}
