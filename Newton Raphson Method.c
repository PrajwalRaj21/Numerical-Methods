#include <stdio.h>
#include <math.h>

#define MAX_ITERATIONS 100
#define TOLERANCE 0.000001

double f(double x) {

return x*x - 2;
}

double df(double x) {

return 2*x;
}

int main() {
double x0;
printf("Enter an initial guess for the root: ");
scanf("%lf", &x0);


for (int i = 0; i < MAX_ITERATIONS; i++) {
    double x1 = x0 - f(x0) / df(x0);
    if (fabs(x1 - x0) < TOLERANCE) {
        printf("Root found at x = %.7lf\n", x1);
        return 0;
    }
    x0 = x1;
}

printf("Root not found after %d iterations\n", MAX_ITERATIONS);
return 1;
}
