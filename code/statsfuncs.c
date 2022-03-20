#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "utils.h"
#include "statsfuncs.h"

double median(double num[], int size){
  double result;
  quickSort(num, 0, size-1);
  
  if(even(size) == true){
    int first;
    int second;

    first = (size/2) - 1;
    second = size/2;

    result = (num[first] + num[second]) / 2;
  }
  else{
    int location;

    location = floor(size / 2);
    result = num[location];
  }
  return result;
}

double mean(double num[], int size){
  double  mean = 0.0;

  for (int i = 0; i < size; ++i){
    mean += num[i];
  }
  return mean/size;
}

double variance(double num[], int size, bool population) {
  double squared_sum = 0.0;
  double mean_;
  double result;
  
  mean_ = mean(num, size); 
  
  for(int i = 0; i < size; ++i) {
    squared_sum += pow((num[i] - mean_), 2);
  }
  
  if(population == true){
    result = squared_sum / size;
  }
  
  else{
    result = squared_sum / (size - 1); 
    
  }
  return result; 
}

double std(double num[], int size, bool population){
  double result;

  if(population == true){
    result = variance(num, size, true);
  }
  
  else{
    result = variance(num, size, false);
  }
  return sqrt(result); 
}
