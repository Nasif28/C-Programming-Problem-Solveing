// A program to determine and print the sum of the following series for the given value of N.
// S = 1*2 + 2*3 + 3*4 +.....+ n1*n2
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;

    printf("Enter n1 and n2 = ");
    scanf("%d %d",&n1,&n2);

    printf("1*2 + 2*3 + 3*4 +....+%d*%d",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 1;
    }
    printf(" = %d\n",sum);

    /*
    For Series S = 1*3 + 2*5 + 3*7 +.....+ n1*n2
    Increase b=3 and b = b + 2;
    */


    getch();
}
