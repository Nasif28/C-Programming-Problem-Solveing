// Write a program that reads N number and displays N th Fibonacci series (0 1 1 2 3 5 8 13 21....).
#include<stdio.h>
#include<conio.h>
int main()
{
    int first=0, second=1, count=0, fibonacci, n;

    printf("Enter the total number of Fibonacci = ");
    scanf("%d",&n);

    while(count<n)
    {
        fibonacci = first + second;
        second = first;
        first = fibonacci;

        printf("%d ",fibonacci);
        count++;
    }


    return 0;
}
