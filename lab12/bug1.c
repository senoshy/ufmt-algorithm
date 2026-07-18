#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  int codigo;
} Produto;

int main() {
  Produto p;
  strcpy(p.nome, "Arroz"); /* bug */ /* letra c, correção do bug */
  p.codigo = 101;
  printf("%s %d\n", p.nome, p.codigo);
  return 0;
}
