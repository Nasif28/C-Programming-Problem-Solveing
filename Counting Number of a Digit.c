// A program thats read a Digit and shows Total Number of the Digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0;

    printf("Enter any Digit = ");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        ++count;
    }
    printf("Total Number of the Digit = %d",count);


    getch();
}
