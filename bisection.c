/*

Find a root for f(x)=x^3-x-1 polynomial by Bisection Method
x in [1,2] interval so a=1 and b=2
tolerance of 10^-5

*/

#include <stdio.h>
#include <math.h>

double f(double x);

int main(void) {
    double a = 1.0, b = 2.0, tol = 1e-5, m;
    int it = 0; // iterations counter
    do {
        m = (a + b)/2.0;
        if (f(a)*f(m)<0.0) {
            b = m;
        }
        else {
            a = m;
        }
        it++;
    } while(fabs(f(m))>tol);

    printf("The root of the polynomial is: %f\n", m);
    printf("The number of interations is: %d", it);    
}

double f(double x) {
    return pow(x,3)-x-1;
}

/* Output:

The root of the polynomial is: 1.324718
The number of interations is: 17

*/
