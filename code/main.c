#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "utils.h"
#include "statsfuncs.h"



int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  struct dist result;
  double result2;
	
  result = exponential(2.3, 1.2);
  result2 = median(test, 8);
  
  
  printf("Probabilitiy: %f \n", result.probability);
  printf("Mean: %f \n", result.mean);
  printf("Variance: %f \n", result.variance);

  printf("%f", result2);

  system("pause");

  return 0;
}
