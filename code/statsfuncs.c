#include <stdio.h>
#include <math.h>
#include <stdbool.h>
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

double cov(double ar1[], double ar2[], int n, bool population){
    double mult_sum;
    double mean_ar1;
    double mean_ar2;
    double result;
    
    mean_ar1 = mean(ar1, n);
    mean_ar2 = mean(ar2, n);

    for(int i = 0;i < n; i++){
        mult_sum += ar1[i] * ar2[i];
    }
    result = mult_sum - (mean_ar1 * mean_ar2 * n);
    if(population == false){
    	result = result / (n - 1);
    }
    else{
	result = result / n;
    }
    return result;  
}

double pcorr(double ar1[], double ar2[], int size){
    double mult_sum;
    double cube_mult_sum_left;
    double cube_mult_sum_right;
    
    double mean_x=mean(ar1, size);
    double mean_y=mean(ar2, size);
    
    double result;
    
    for(int i=0; i < size; i++){
        mult_sum += (ar1[i] - mean_x) * (ar2[i] - mean_y);
        
        cube_mult_sum_left += pow((ar1[i] - mean_x), 2);
        cube_mult_sum_right += pow((ar2[i] - mean_y), 2);
    }
    
    result = mult_sum / sqrt(cube_mult_sum_left * cube_mult_sum_right);
    
    return result;
}
