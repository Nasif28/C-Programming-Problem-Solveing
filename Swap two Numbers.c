// A program that Swap two numbers with temporary variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,temp;

    printf("Enter two Numbers = ");
    scanf("%d %d",&num1,&num2);

    printf("Number1 is = %d\n",num1);
    printf("Number2 is = %d\n\n",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swap,\n");
    printf("Number1 is = %d\n",num1);
    printf("Number2 is = %d\n",num2);

    getch();

}
