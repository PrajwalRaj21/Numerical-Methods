#include <stdio.h>
#include <math.h>

#define MAX_ITERATIONS 100
#define TOLERANCE 0.0001

double function(double x) {
return x*x - 4;
}

int main() {
double a;
double b;
double m = (a + b) / 2;
int i;

printf("Enter the value for a: ");
scanf("%lf", &a);
printf("Enter the value for b: ");
scanf("%lf", &b);


for (i = 0; i < MAX_ITERATIONS; i++) {
if (function(a) * function(m) < 0) {
b = m;
}
else {
a = m;
}
m = (a + b) / 2;

// Copy code
if (fabs(function(m)) < TOLERANCE) {
  printf("Root found at %f after %d iterations.\n", m, i+1);
  return 0;
}
}

printf("Root not found after %d iterations.\n", MAX_ITERATIONS);
return 1;
}



