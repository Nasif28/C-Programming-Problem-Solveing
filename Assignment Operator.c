// A program that shows all Assignment Operator and How they works.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;

    printf("Enter a Number = ");
    scanf("%d",&a);

    a+=2;   // a = a+2 ;
    printf("%d\n",a);

    a-=2;   // a = a-2 ;
    printf("%d\n",a);

    a*=2;   // a = a*2 ;
    printf("%d\n",a);

    a/=2;   // a = a/2 ;
    printf("%d\n",a);

    a%=2;   // a = a%2 ;
    printf("%d\n",a);


    getch();
}

