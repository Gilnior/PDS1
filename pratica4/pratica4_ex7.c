#include "pratica4.h"
#include <stdio.h>

void main() {

    printf("Sexo (M/F): \n");
    char sexo = getchar();
    
    printf("Altura (em metros): \n");
    float altura = 0; 
    scanf("%f", &altura);

    printf("Peso (kg): \n");
    float peso = 0; 
    scanf("%f", &peso);

    float peso_ideal = pesoIdeal(altura, sexo);

    float diferenca = peso - peso_ideal;

    if (diferenca > 0) {
        printf("Necessário perder %f kg", diferenca);
    } else {
        printf("Necessário ganhar %f kg", diferenca);
    }
    printf("\n");
}