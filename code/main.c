#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "statsfuncs.h"



int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  struct dist result, result3, result4, result6;
  double result2, result5;
	
  result = exponential(2.3, 1.2);
  result3 = beta(0.5, 0.4, 0.8);
  result4 = gauss(0, 1, 2);
  result6 = geometric(10, 0.5);
  result2 = median(test, 8);
  result5 = mean(test, 8);
  
  
  printf("exp Probabilitiy: %f \n", result.probability);
  printf("exp Mean: %f \n", result.mean);
  printf("exp Variance: %f \n", result.variance);

  printf("beta Probabilitiy: %f \n", result3.probability);
  printf("beta Mean: %f \n", result3.mean);
  printf("beta Variance: %f \n", result3.variance);

  printf("normal Probabilitiy: %f \n", result4.probability);
  printf("normal Mean: %f \n", result4.mean);
  printf("normal Variance: %f \n", result4.variance);

  printf("geometric Probabilitiy: %f \n", result6.probability);
  printf("geometric Mean: %f \n", result6.mean);
  printf("geometric Variance: %f \n", result6.variance);

  printf("median: %f \n", result2);
  printf("mean: %f \n", result5);

  print(test, 8);

  system("pause");

  return 0;
}
