// A program that takes an integer as input and displays it is Palindrome or Not.
// if N=12321 and the Reverse is 12321. Then its a Palindrome Number.
#include <stdio.h>
#include <stdlib.h>
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
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    if(num==sum)
        printf("%d is a Palindrome Number",num);

    else
        printf("%d is not a Palindrome Number",num);


    getch();
}
