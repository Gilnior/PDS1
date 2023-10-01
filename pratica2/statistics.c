#include <math.h>
#include "statistics.h"

float cauchy(float x) {
    return 1 / (M_PI * (1 + x*x));
}

float gumbel(float x, float u, float b) {
    float z = (x-u)/b;

    return (1/b)*exp(-(z + exp(-z)));
}

float laplace(float x, float u, float b) {
    return exp(
        (-fabs(x-u))/b
        ) / (2*b);
}
