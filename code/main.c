#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "utils.h"
#include "statsfuncs.h"



int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double result, result2;
	
  struct dist te;
  te.probability = 1.0;
  te.mean = 2.0;
  te.variance = 3.0;

  printf( "probability : %f\n", te.probability);
  printf( "variance : %f\n", te.variance);
  printf( "mean : %f\n", te.mean);



  result = exponential(2.3, 1.2);
  result2 = median(test, 8);
  
  
  printf("%f \n", result);

  printf("%f", result2);

  system("pause");

  return 0;
}
