#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void maisProximo(int v[], int n, int T, int *ri, int *rj) {
  int d, s, melhor = 200000000;
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      s = v[i] + v[j];
      d = abs(s - T);

      if (d < melhor) {
        melhor = d;
        *ri = i;
        *rj = j;
      }
    }
  }
}

int main() {
  int v[MAX], n, T;
  printf("Tamanho do vetor: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("v[%d]: ", i);
    scanf("%d", &v[i]);
  }

  printf("Alvo T: ");
  scanf("%d", &T);

  int ri = -1;
  int rj = -1;

  maisProximo(v, n, T, &ri, &rj);

  if (ri != -1 && rj != -1) {
    int s = v[ri] + v[rj];
    int d = abs(s - T);
    printf("par: (%d, %d) = %d, distancia = %d\n", v[ri], v[rj], s, d);
  }

  return 0;
}
