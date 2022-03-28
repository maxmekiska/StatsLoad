#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "statsfuncs.h"



int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double ar1[] = {2.1, 2.5, 3.6, 4};
  double ar2[] = {8, 10, 12, 14};

  struct dist result, result3, result4, result6, result7, result10;
  double result2, result5, result8, result9, result11, result12;
	
  result = exponential(2.3, 1.2);
  result3 = beta(0.5, 0.4, 0.8);
  result4 = gauss(0, 1, 2);
  result6 = geometric(10, 0.5);
  result7 = poisson(10, 4);
  result10 = chisquare(2, 4);
  result11 = gumbel(3, 2, 1, 0);
  result12 = gumbel(3, 2, 1, 1);
  result2 = median(test, 8);
  result5 = mean(test, 8);
  result8 = binoc(7, 3);
  result9 = cov(ar1, ar2, 4);
  
  
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

  printf("poisson Probabilitiy: %f \n", result7.probability);
  printf("poisson Mean: %f \n", result7.mean);
  printf("poisson Variance: %f \n", result7.variance);

  printf("chi squared Probabilitiy: %f \n", result10.probability);
  printf("chi squared Mean: %f \n", result10.mean);
  printf("chi squared Variance: %f \n", result10.variance);

  printf("gumbel v = 0: %f \n", result11);
  printf("gumbel v = 1: %f \n", result12);


  printf("median: %f \n", result2);
  printf("mean: %f \n", result5);
  printf("binomial coefficient: %f \n", result8);
  printf("Covariance: %f \n", result9);

  print(test, 8);

  system("pause");

  return 0;
}
