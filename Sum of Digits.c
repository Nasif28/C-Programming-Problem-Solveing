// A program that reads a Number N and shows the Sum of Digits of the Number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,r,sum=0;

    printf("Enter any number = ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }

    printf("Sum of Digits = %d",sum);


    getch();
}
