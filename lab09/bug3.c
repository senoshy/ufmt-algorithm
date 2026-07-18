#include <stdio.h>
#define N 5
void zera(int *v, int n) {
  for (int i = 0; i < n; i++) {
    v[i] = 0;
  } /* tenta "substituir" o vetor */
}

int main() {
  int v[N] = {1, 2, 3, 4, 5};
  zera(v, N);
  for (int i = 0; i < N; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");

  return 0;
}
