// A program that can copy value from Array to another Array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[999], array2[999],n,r,i;

    printf("Enter How many Number you Want : ");
    scanf("%d",&n);

    printf("Enter those Numbers : \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1 : ");

    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }

    printf("\nArray2 : ");

    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }



    getch();
}

