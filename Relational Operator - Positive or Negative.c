// A program that reads a Number and checks the number is Positive or Negative.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter a Number = ");
    scanf("%d",&num);

    if(num>0)
        printf("The Number is Positive");

    else if(num<0)
         printf("The Number is Negative");

    else
     printf("The Number is Zero");



    getch();
}
