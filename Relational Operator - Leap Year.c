// A program that reads a year and checks the year is Leap Year or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("Enter any Year = ");
    scanf("%d",&year);

    if(year%400==0)
        printf("This Year is a Leap Year");

    else if(year%4==0 && year%100!=0)
        printf("This Year is a Leap Year");

    else
        printf("This Year is not a Leap Year");


    getch();
}
