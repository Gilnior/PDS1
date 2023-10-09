#include <stdio.h>

char leChar() {
  char c;

  scanf("%c", &c);
  return c;
}

int verifica(char c) { return c >= '0' && c <= '9'; }

int converte(char cdez, char cuni) {
  int resultado = -1;

  if (verifica(cdez) && verifica(cuni)) {
    resultado = 10 * (cdez - '0') + (cuni - '0');
  }

  return resultado;
}

int limpaStdin() {
  char c;
  int i = 0;

  do {
    c = leChar();
    i++;
  } while (c != '\n');
  return i;
}

void leInt(int *num) {
  //(0.5)
  int countStdin = 0;
  char c1, c2;
  // inicializa o conte ́udo do endere ̧co com -1:
  *num = -1;           //(0.5)
  while (*num == -1) { //(0.5)
    c1 = leChar();     //(0.5)
    c2 = leChar();     //(0.5)
    limpaStdin();      //(0.5)

    if (verifica(c1) && verifica(c2)) { //(0.5)
      // armazena o inteiro correto no endere ̧co:
      *num = converte(c1, c2); //(0.5)
    }
  }
}
