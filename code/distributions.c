#include <math.h>
#include <stdbool.h>
#include "statsfuncs.h"

struct dist gauss(double mu, double sigma, double x){
    double term1;
    double term2;
    double sigma_sqrt;
    struct dist result;

    sigma_sqrt = pow(sigma, 2);

    term1 = pow((2 * M_PI * sigma_sqrt), -0.5);
    term2 = exp(-(pow(x-mu, 2)) / 2 * sigma_sqrt);

    result.probability = term1 * term2;
    result.mean = mu;
    result.variance = sigma_sqrt;

    return result;
}

struct dist beta(double alpha, double beta, double x){
    double term1;
    double term2;
    double term3;
    struct dist result;

    term1 = (gamma((alpha + beta))) / (gamma(alpha) * gamma(beta));

    term2 = pow((1 - x), (beta - 1));

    term3 = pow(x, (alpha - 1));

    result.probability = term1 * term2 * term3;
    result.mean = alpha / (alpha + beta);
    result.variance = (alpha * beta) / ((pow((alpha + beta), 2)) * (alpha + beta + 1));

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

struct dist geometric(int trials, double success_prob){
	double failure_prob;
	int trial_adj;
	struct dist result;	

	failure_prob = 1 - success_prob;
	trial_adj = trials - 1;

	result.probability = success_prob * pow(failure_prob, trial_adj);
	result.mean = 1 / success_prob;
	result.variance = (1 - success_prob) / (pow(success_prob, 2));
	
	return result;
}

struct dist poisson(int x, double lambda){
	double term1;
	double term2;
	double term3;
	struct dist result;

	term1 = 1 / (factorial(x));
	term2 = pow(lambda, x);
	term3 = exp(- lambda);

	result.probability = term1 * term2 * term3;
	result.mean = lambda;
	result.variance = lambda;
	return result;
}

struct dist chisquare(double v, double x){
	double term1;
	double term2;
	double term3;
	struct dist result;

	term1 = (pow(2, (-v/2))) / gamma(v/2);
	term2 = pow(x, ((v / 2) - 1));
	term3 = exp((-v / 2));

	result.probability = term1 * term2 * term3;
	result.mean = v;
	result.variance = 2 * v;

	return result;
}


