#ifndef BASICSTATS_HEADER
#define BASICSTATS_HEADER

struct dist {
    double probability;
    double mean;
    double variance;
};

double median(double num[], int size);

double mean(double num[], int size);

double variance(double num[], int size, bool population);

double std(double num[], int size, bool population);

struct dist gauss(double mu, double sigma, double x);

struct dist beta(double alpha, double beta, double x);

struct dist exponential(double lambda, double x);

#endif
