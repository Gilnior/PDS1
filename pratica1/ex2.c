#include <stdio.h>

void swap(float* v1, float* v2) {
    float tmp = *v1;

    *v1 = *v2;
    *v2 = tmp;
} 

void main() {
    float a = 3.14159, b = 2.71828;

    swap(&a, &b);

    printf("\nPI = %f", b);
    printf("\nEULER = %f", a);
}
