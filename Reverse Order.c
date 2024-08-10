// A program that takes an integer as input and displays it in reverse order.
// if N=1234 then display 4321.
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int num,temp,r,sum=0;

    printf("Enter any Number = ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    printf("Reverse of the Number is = %d",sum);


    getch();
}

