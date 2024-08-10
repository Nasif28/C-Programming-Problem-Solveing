// A program that shows the use of Goto Statement.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
Start:
    printf("%d\n",i);
    i++;

    if(i<5)
        goto Start; // label is calling here


    getch();
}

