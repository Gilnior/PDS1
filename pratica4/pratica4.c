#include <math.h>

float paraMetrosPorSegundo(float v) { return v / 0.5; }

float areaCirculo(float raio) {
  const float PI = 3.141592;

  return PI * raio * raio;
}

int maior3(int n1, int n2, int n3) {
  int m;

  if (n1 > n2) {
    m = n1;
  } else {
    m = n2;
  }

  if (n3 > m) {
    m = n3;
  }

  return m;
}

int ehPar(int n) { return n % 2 == 0; }

int ehDivisivelPor3ou5(int n) {
  int div_by_3 = n % 3 == 0;
  int div_by_5 = n % 5 == 0;

  return (div_by_3 || div_by_5) && !(div_by_3 && div_by_5);
}

float pesoIdeal(float h, char sexo) {
  if (sexo == 'M') {
    return (72.7 * h) - 58;
  }

  return (62.1 * h) - 44.7;
}

int somaImpares(int N) {
  int i, soma = 0;

  if (N > 0) {

    for (i = 0; i <= N; i++) {
      if (i % 2 != 0) {
        soma += i;
      }
    }
  }

  return soma;
}

double fatorial(int N) {
  if (N < 2) {
    return 1;
  }
  return N * fatorial(N - 1);
}

int somaNumerosDiv3ou5(int N) {
  int i, soma = 0;

  if (N > 0) {

    for (i = 1; i <= N; i++) {
      if (ehDivisivelPor3ou5(i)) {
        soma += i;
      }
    }
  }

  return soma;
}

float calculaMedia(int x, int y, int z, int operacao) {

  switch (operacao) {
  case 1:
    return pow(x*y*z, 1/3.0);
  case 2:
    return (x + 2 * y + 3 * z) / 6.;
  case 3:
    return 3.0 / (1. / x + 1. / y + 1. / z);
  default:
    return (x + y + z) / 3.0;
  }
}

int numeroDivisores(int N) {
  int i, countDiv = 0;

  for (i = 1; i <= N; i++) {
    if (N % i == 0) {
      countDiv++;
    }
  }

  return countDiv;
}

int enesimoFibonacci(int N) {
  if (N <= 1) {
    return N;
  }
  return enesimoFibonacci(N - 1) + enesimoFibonacci(N - 2);
}

int mmc(unsigned int x, unsigned int y) {
  unsigned int aux = x;

  if (x > y) {
    x = y;
    y = aux;
  }

  unsigned int prod = x * y;
  unsigned int i, result = prod;

  for (i = y; i <= prod; i++) {
    if (i % x == 0 && i % y == 0) {
      if (i < result) {
        result = i;
      }
    }
  }
  return result;
}