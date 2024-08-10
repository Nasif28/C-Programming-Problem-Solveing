// A program that shows all Unary Operator and How they works.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x = 10;

    printf("%d\n",x++); //x= 10
    printf("%d\n",x); //x= 11
    printf("%d\n",++x); //x= 12
    printf("%d\n",x); //x= 12
    printf("%d\n",x--); //x= 12
    printf("%d\n",x); //x= 11
    printf("%d\n",--x); //x= 10


    getch();
}
