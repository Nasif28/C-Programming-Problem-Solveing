// Write a program to convert the given temperature in Fahrenheit to Celsius.
#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    float fahrenheit, celsius;

    printf("Enter your Choice\n");

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    scanf("%d",&choice);

    if(choice==1)
    {
         printf("Enter Fahrenheit Temperature = ");
         scanf("%f",&fahrenheit);

    celsius = (fahrenheit-32)/1.8;

    printf("The Celsius Temperature is = %.2f",celsius);
    }

    else if(choice==2)
    {
        printf("Enter Celsius Temperature = ");
         scanf("%f",&celsius);

    fahrenheit = (1.8*celsius)+32;

    printf("The Fahrenheit Temperature is = %.2f",fahrenheit);
    }

   else
    printf("Your Choice is incorrect");


    return 0;
}


