// A program thats takes two integer number and show the Summation, Subtraction, Multiplication, Division & Remainder.
#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two Number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("The Summation is : %d\n",result);

    result = num1 - num2;
    printf("The Subtraction is : %d\n",result);

    result = num1 * num2;
    printf("The Multiplication is : %d\n",result);

    result = num1 / num2;
    printf("The division is : %d\n",result);

    result = num1 % num2;
    printf("The Remainder is : %d\n",result);


    getch();
}


