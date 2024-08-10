// A program that search the position of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[] = {10,2,25,63,14,2,83};

    int value, pos=-1,i;

    printf("Enter the Value you want to Search = ");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found");
    }
    else
    {
        printf("Item is found at %d position",pos);
    }


    getch();
}
