#include <stdio.h>
#include "prova1.h"

int main() {
    int num, soma=0;

    do{
        leInt(&num);
        printf("num=%d\n", num);
        soma += num;
    } while(num);

    printf("Soma=%d", soma);

}