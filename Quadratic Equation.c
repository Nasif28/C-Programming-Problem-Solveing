//A program to find all the possible roots of a Quadratic Equation.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    double a,b,c,det,root,root1,root2,real,imag;

    printf("Enter Value of A, B and C = ");
    scanf("%lf %lf %lf",&a,&b,&c);

    det = b*b-4*a*c;

    if(det>0)
    {
        root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("Root(1) = %.2lf\nRoot(2) = %.2lf",root1,root2);

    }

    else if(det==0)
    {
        root = -(b/(2*a));
        printf("Root = %.3lf",root);

    }
    else
    {
        real = -(b/(2*a));
        imag = (sqrt(-(b*b-4*a*c))/(2*a));

        printf("Root(1) = %.2lf + %.2lfi\n",real,imag);
        printf("Root(2) = %.2lf - %.2lfi\n",real,imag);

    }


    getch();
}

