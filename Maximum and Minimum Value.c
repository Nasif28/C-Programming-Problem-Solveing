// A program that fiends the Maximum and Minimum value from three number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;

    printf("Enter First Number = ");
    scanf("%d",&a);

    printf("Enter Second Number = ");
    scanf("%d",&b);

    printf("Enter Third Number = ");
    scanf("%d",&c);



    if(a>b && a>c)
        printf("The maximum value is = %d\n",a);

    else if(b>a && b>c)
        printf("The maximum value is = %d\n",b);

    else if(c>a && c>b)
        printf("The maximum value is = %d\n",c);

    else
        printf("Numbers are Equal\n");




    if(a<b && a<c)
        printf("The Minimum value is = %d\n",a);

    else if(b<a && b<c)
        printf("The Minimum value is = %d\n",b);


    else if(c<a && c<b)
        printf("The Minimum value is = %d\n",c);

    else
        printf("The numbers are Equal\n");



 getch();
}

