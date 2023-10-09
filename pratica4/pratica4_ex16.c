#include "pratica4.h"
#include <stdio.h>

int main() {
  unsigned int x, y;
  int aux = 0;

  do {
    if (aux) {
      printf("\nInput invalido, tentemos novamente\n");
    }

    printf("Digite dois numeros inteiros não negativos:\n");
    scanf("%u %u", &x, &y);
    aux = x <= 0 || y <= 0;

  } while (aux);

  printf("MMC entre %u e %u é %d\n", x, y, mmc(x, y));
  return 0;
}