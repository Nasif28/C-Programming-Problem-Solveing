// A program thats reads a Mark and shows the Grade.
#include<stdio.h>
#include<conio.h>
int main()
{
    float mark;
    printf("Enter your Mark = ");
    scanf("%f",&mark);

    if(mark>=80 && mark<=100)
        printf("The Grade is = A+");

    else if(mark>=70 && mark<=100)
        printf("The Grade is = A");

    else if(mark>=60 && mark<=100)
        printf("The Grade is = A-");

    else if(mark>=50 && mark<=100)
        printf("The Grade is = B");

    else if(mark>=40 && mark<=100)
        printf("The Grade is = C");

    else if(mark>=33 && mark<=100)
        printf("The Grade is = D");

    else if(mark>100 || mark<0)
        printf("Invalid Mark");

    else
        printf("The Grade is = Fail");


    getch();
}


