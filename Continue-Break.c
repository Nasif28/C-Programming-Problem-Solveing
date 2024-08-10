// A program that shows the use of Continue and Break.
// A program thats read value of N and shows all the number which are not equally divided by 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter Value of N = ");
    scanf("%d",&n);
    for(i=1; i<999; i++)
    {
        if(i%3==0)
            continue; // bypass

        printf("%d\n",i);

        if(i==n)
            break; // loop terminate
    }


    getch();
}

