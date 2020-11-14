#include <stdio.h>
#include "myMath.h"

int main()
{   
    double x;
    double fx1, fx2, fx3;
    
    printf("Hello, welcome to the functions calculator! \n");
    printf("The calculator calculates the result of three different functions, according to your input. \n");
    printf("Notes: * If the number is decimal, the calculator would rounds the exponent down. \n");
    printf("       * The solution shows only four digits after the decimal point. \n\n");
    printf("Please insert a real number: \n");
    scanf("%lf", &x);

    // Function#1: f(x) = e^x + x^3 -2
    fx1 = sub(add(Exponent(x), Power(x, 3)), 2);

    // Function#2: f(x) = 3x + 2x^2
    fx2 = add(mul(x, 3 ), mul(Power(x, 2), 2));

    // Function#3: f(x) = (4x^3)/5 - 2x
    fx3 = sub(div(mul(Power(x, 3), 4), 5), mul(x, 2));
	
    printf("\nSolutions:\n");
    printf("1) The value of f(x) = e^x + x^3 -2 at the point %lf is: %0.4lf\n", x, fx1);
    printf("2) The value of f(x) = 3x + 2x^2 at the point %lf is: %0.4lf\n", x, fx2);
    printf("3) The value of f(x) = (4x^3)/5 - 2x at the point %lf is: %0.4lf\n\n", x, fx3);

    return 0;
}
