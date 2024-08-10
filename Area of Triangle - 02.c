// A program thats take Length of three Arm of a Triangle and show the Area.
#include<stdio.h>
#include<conio.h>
int main()
{
    double a,b,c,s,area;

    printf("Enter three Length = ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area of the Triangle is = %.2lf\n",area);


    getch();

}




