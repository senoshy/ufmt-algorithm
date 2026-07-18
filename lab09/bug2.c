#include <stdio.h>
#define N 5
float maior(float v[], int n) {
  float m = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] > m)
      m = v[i];
  }

  return m;
}

int main() {
  float v[N] = {0.0};

  printf("Maior: %.1f\n", maior(v, N));
  printf("Digite %d valores:\n", N);

  for (int i = 0; i < N; i++) {
    scanf("%f", &v[i]);
  }

  printf("Maior: %.1f\n", maior(v, N));
  return 0;
}
