// A program thats take Hight ans Base of a Triangle and show the Area.
#include<stdio.h>
#include<conio.h>
int main()
{
    float base,height,area;

    printf("Enter the Base = ");
    scanf("%f",&base);

    printf("Enter the Height = ");
    scanf("%f",&height);

    area=.5*base*height;

    printf("The Area of the Triangle is = %.2f\n",area);


    getch();

}



