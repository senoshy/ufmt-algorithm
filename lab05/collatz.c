#include <stdio.h>

int par(unsigned int valor) { return valor / 2; }

int impar(unsigned int valor) { return 3 * valor + 1; }

int main() {
  unsigned int valor, passos = 0;

  printf("digite um valor a ser inserido na sequencia de collatz: ");
  scanf("%u", &valor);
  while (valor != 1) {
    if (valor % 2 == 0) {
      valor = par(valor);
    } else {
      valor = impar(valor);
    }
    printf("%u ", valor);
    printf("-> ");
    ++passos;
  }
  printf("1\n");
  printf("Numero de passos: %u", passos);
  return 0;
}
