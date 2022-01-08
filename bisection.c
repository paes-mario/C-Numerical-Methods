/* find a root for p(x)=x^3-x-1 polynomial
use Bisection Method with x in [1,2] interval */

#include <stdio.h>
#include <math.h>

double p(double x);

int main() {
    double a = 1.0;
    double b = 2.0;
    double tol = 1e-5;
    int iterations = 0;
    double m = (a + b)/2.0;
    
    do {
        if (p(a)*p(m)<0.0) {
            b = m;
        }
        else {
            a = m;
        }
        m = (a + b)/2.0;
        iterations++;
    } while(fabs(p(m))>tol);

    printf("The root of the polynomial is: %f\n", m);
    printf("The number of interations is: %d", iterations);

    return 0;    
}

double p(double x) {
    return pow(x,3)-x-1;
}

/*Output:
The root of the polynomial is: 1.324718
The number of interations is: 17
*/