#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "utils.h"
#include "basicstats.h"

int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double result, result2;

  result = beta(1.1, 2, 0.4);
  result2 = median(test, 8);
  
  
  printf("%f \n", result);

  printf("%f", result2);

  system("pause");

  return 0;
}
