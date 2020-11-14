#include "myMath.h"

double Exponent(int x) {
    double exe = 1;
    // Checks the exponent is a positve number
    if(x>0) {
    // While the exponent is greater than zero, multiplys the number by e
    while(x>0)
    {
    	exe *= e;
    	x--;
     }
    }
    
    else {
    // Converts the number to positive
    x = x * -1;
    // While the exponent is greater than zero, multiplys the number by e
    while(x>0)
    {
    	exe *= fraction;
    	x--;
     }
    }
    
    return exe;
}

double Power(double x, int y) {
    double exponentiation = 1;
    // While the exponent is greater than zero, multiplys the number by x
    while(y>0)
    {
        exponentiation *= x;
        y--; 
    }
    return exponentiation;
}
