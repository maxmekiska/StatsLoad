#include <stdio.h>
#include <math.h>
#include <stdbool.h>



bool even(int number){
  if(number%2 == 0){
    return true;
  }
  else{
    return false;
  }
}

void swap(double *a, double *b) {
  double t = *a;
  *a = *b;
  *b = t;
}

int partition(double array[], int low, int high) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(double array[], int low, int high) {
  if (low < high) {

    int pi = partition(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

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

void print(double array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%f  ", array[i]);
  }
  printf("\n");
}

int main(void) {
  double test[] = {1.0, 9.0, 4.0, 5.0, 6.0, 9.0, 8.0, 1.5};
  double result;

  result = median(test, 8);
  
  printf("%f", result);
  return 0;
}

