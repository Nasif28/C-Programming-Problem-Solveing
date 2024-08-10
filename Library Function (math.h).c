// A program that show all math related term.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double x,result;

    printf("Enter the value of x = ");
    scanf("%lf",&x);

    result = sin(x);

    printf("sin %.2lf = %.2lf\n",x,result);

    /*
    abs(), sqrt(), pow()
    log(), log10(), exp(), sin(), cos(), tan()
    round(), trunc(), ceil(), floor()
    */

    /*
    round = (give 4.34, shows 4.00  and  give 4.54, shows 5.00)
    trunc = (give int/float/double number, shows only the integer part of those number)
    ceil = (give 3.2/3.5/3.9, shows 4.0)
    floor = (give 3.2/3.5/3.9, shows 3.0)
    */


    getch();
}

