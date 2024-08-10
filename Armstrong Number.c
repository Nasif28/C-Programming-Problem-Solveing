// A program that takes an integer as input and displays it is Armstrong Number or Not.
// if N=153 and the 1^3+5^3=3^3 = 153. Then its a Armstrong Number.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int num,temp,r,sum=0;

    printf("Enter any Value : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is a Armstrong Number",num);

    else
        printf("%d is not a Armstrong Number",num);


    getch();
}
