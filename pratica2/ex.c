#include "statistics.h"
#include <stdio.h>

// cauchy(x=-2) [resultado para conferência: 0.063662]

// gumbel(x=0, $\mu$=0.5, $\beta$=2) [resultado para conferência: 0.177786]

// laplace(x=-6, $\mu$=-5, $b$=4) [resultado para conferência: 0.097350]

int main() {
    printf("cauchy(x=-2) = %.4f", cauchy(-2));
    printf("gumbel(x=0, u=0.5, b=2) = %.4f", gumbel(0,0.5, 2));
    printf("laplace(x=-6, u=-5, b=4) = %.4f", laplace(-6, -5, 4));

    return 0;
}