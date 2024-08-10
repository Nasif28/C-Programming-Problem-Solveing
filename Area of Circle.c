// A program thats take Radius of a Circle and  show the Area.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float radius,area;

    printf("Enter the Radius = ");
    scanf("%f",&radius);

    area = M_PI * radius * radius;

    printf("Area of the Circle is = %.2f\n",area);


    getch();

}





