#include <stdio.h>
#include <math.h>

#define MAX_ITERATIONS 100
#define TOLERANCE 0.00001

double f(double x) {
  return x * x - 4;
}

int main() {
  double x0, x1;
  int i;

  printf("Enter the initial numbers for x0 and x1: ");
  scanf("%lf%lf", &x0, &x1);

  for (i = 0; i < MAX_ITERATIONS; i++) {

    double x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));

    if (fabs(x2 - x1) < TOLERANCE) {

      printf("Root = %.5lf\n", x2);
      return 0;
    }
    x0 = x1;
    x1 = x2;
  }


  printf("Root not found after %d iterations\n", MAX_ITERATIONS);
  printf("EXIT.");
  return 1;
}
