// A program that reads a Alphabet and checks the Alphabet is Capital or Small.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("Enter any Alphabet = ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("This is a Small Alphabet");

    else if(ch>='A' && ch<='Z')
        printf("This is a Capital Alphabet");

    else
        printf("This is not a Alphabet");


    getch();
}


