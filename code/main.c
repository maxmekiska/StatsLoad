#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "statsfuncs.h"



int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double ar1[] = {2.1, 2.5, 3.6, 4};
  double ar2[] = {8, 10, 12, 14};
  double ar3[] = {2.1, 2.5, 3.6, 4, 2};
  double ar4[] = {8, 10, 12, 14, 2};
  double result16;

  result16 = pcorr(ar3, ar4, 5);
 
  printf("Pearson Correlation r: %f \n", result16);

  system("pause");

  return 0;
}
