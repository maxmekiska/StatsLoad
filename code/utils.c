#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void print(double array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%f", array[i]);
  }
}

double factorial(double n){
  double result = 1.0;
  for(int i=n; i > 1 ; i--){
    result *= i;
  }
  return result;
}

double gamma(double n){
  double result;

  result = factorial(n-1);

  return result;
}

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
