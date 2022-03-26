#ifndef BASICSTATS_HEADER
#define BASICSTATS_HEADER

struct dist {
    double probability;
    double mean;
    double variance;
};

void print(double array[], int size);

double factorial(double n);

double gamma(double n);

bool even(int number);

void swap(double *a, double *b);

int partition(double array[], int low, int high);

void quickSort(double array[], int low, int high);

double median(double num[], int size);

double mean(double num[], int size);

double variance(double num[], int size, bool population);

double std(double num[], int size, bool population);

struct dist gauss(double mu, double sigma, double x);

struct dist beta(double alpha, double beta, double x);

struct dist exponential(double lambda, double x);

#endif
