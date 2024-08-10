// A program of Conversion Lowercase letter to Uppercase latter using Library Function.
#include<stdio.h>
#include<conio.h>
int main()
{
    char lower,upper;

    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    //lower = tolower(upper);

    printf("The Uppercase letter is : %c",upper);

    // Library Function = toupper & tolower

    getch();
}

