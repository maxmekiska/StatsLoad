#include <math.h>
#include <stdbool.h>
#include "utils.h"
#include "statsfuncs.h"

double gauss(double mu, double sigma, double x){
    double prob;
    double term1;
    double term2;
    double sigma_sqrt;

    sigma_sqrt = pow(sigma, 2);

    term1 = pow((2 * M_PI * sigma_sqrt), -0.5);
    term2 = exp(-(pow(x-mu, 2)) / 2 * sigma_sqrt);

    prob = term1 * term2;
    return prob;
}

double beta(double alpha, double beta, double x){
    double term1;
    double term2;
    double term3;
    double result;

    term1 = (gamma((alpha + beta))) / (gamma(alpha) * gamma(beta));

    term2 = pow((1 - x), (beta - 1));

    term3 = pow(x, (alpha - 1));

    result = term1 * term2 * term3;

    return result;
}

struct dist exponential(double lambda, double x){
    double term1;
    struct dist result;

    term1 = -(lambda * x);

    result.probability = exp(term1);
    result.mean = lambda;
    result.variance = pow(lambda, 2);


    return result;
}
