/*
Relational Operator < <= == != => >
Control Statement: Conditional Control Statement, Loop Control Statement
Conditional Control Statement: if-else, switch
Loop Control Statement: for, while, do while
*/
// A program that reads a number N and checks the number is Odd or Even.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even\n");

    if(num%2!=0)
        printf("Odd\n");

    /*
    if(num%2==0)
      printf("Even\n");

    else
      printf("Odd\n");
    */

    getch();
}

