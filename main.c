#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "utils.h"
#include "basicstats.h"

int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double result;

  result = median(test, 8);
  
  printf("%f", result);
  return 0;
}