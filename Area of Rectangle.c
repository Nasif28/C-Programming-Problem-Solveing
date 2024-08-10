// A program thats take Length and Width of a Rectangle and  show the Area.
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,width,area;

    printf("Enter the Length = ");
    scanf("%f",&length);

    printf("Enter the Width = ");
    scanf("%f",&width);

    area = length * width;

    printf("Area of the Rectangle is = %.2f\n",area);


    getch();

}




