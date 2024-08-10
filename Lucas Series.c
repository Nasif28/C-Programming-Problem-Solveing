// A program that read a number and displays the Lucas series (1 1 1 3 5 9 17 31).
#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d,n,i;

    printf("Enter the Range : ");
    scanf("%d",&n);

    a=1;
    b=1;
    c=1;

    printf(" %d %d %d ",a,b,c);

    for(i=1; i<=n-3; i++)
    {
        d = a+b+c;
        a=b;
        b=c;
        c=d;

        printf("%d ",d);
    }


    getch();
}
