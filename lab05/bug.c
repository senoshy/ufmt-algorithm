#include <stdio.h>
int main() {
  int x, soma = 0, cont = 0;
  printf("Digite numeros (0 para parar):\n");
  scanf("%i", &x);
  while (x != 0) {
    soma += x;
    cont++;
    scanf("%i", &x);
  }

  float media = (float)soma / cont;
  printf("Media: %.2f\n", media);
  return 0;
}
