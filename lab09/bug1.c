#include <stdio.h>
#define N 5
int main() {
  int v[N];
  int soma = 0;

  for (int i = 0; i < N; i++) {
    scanf("%d", &v[i]);
  }

  for (int i = 0; i < N; i++) {
    soma += v[i];
  }

  printf("Soma: %d\n", soma);
  return 0;
}
