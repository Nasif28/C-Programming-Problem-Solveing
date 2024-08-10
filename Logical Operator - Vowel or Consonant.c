// A program that reads a Character and checks the Character is Vowel or Consonant.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet = ");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("The Alphabet is Vowel");

    else
        printf("The Alphabet is Consonant");


    getch();
}

