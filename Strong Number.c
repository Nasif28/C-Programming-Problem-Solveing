// A program that takes a Number and shows the number is Strong Number or Not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,temp,fact,sum=0,i;

    printf("Enter an Number : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem = temp % 10;

        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }

        sum = sum + fact;
        temp = temp/10;
    }

    if(sum==num)
        printf("%d is a STRONG Number",num);

    else
        printf("%d is not a STRONG Number",num);


    getch();
}
