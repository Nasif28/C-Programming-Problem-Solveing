// A program thats read a Number and shows its Multiplication Table.
#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
        int i,num;
        printf("Enter any Number = ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)

            printf("%d x %d = %d\n",num,i,num*i);
        printf("\n");
    }


    getch();
}

