// A program that can take some number and displays the Minimum and Maximum Number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[100],n,i;

    printf("Enter total Number = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

  int max = num[0];

    for(i=1; i<n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }

    printf("Maximum Number = %d\n",max);


   int min = num[0];

    for(i=1; i<n; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }

    printf("Minimum Number = %d\n",min);



    getch();
}
