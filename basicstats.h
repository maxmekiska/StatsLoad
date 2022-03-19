#ifndef BASICSTATS_HEADER
#define BASICSTATS_HEADER

double median(double num[], int size);

double mean(double num[], int size);

double variance(double num[], int size, bool population);

double std(double num[], int size, bool population);

double gauss(double mu, double sigma, double x);

#endif