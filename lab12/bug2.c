#include <math.h>
#include <stdio.h>

typedef struct {
  float x;
  float y;
} Ponto;

float distancia_origem(Ponto *p) {
  return sqrt(p->x * p->x + p->y * p->y); /* bug */
}

int main() {
  Ponto pt = {3.0, 4.0};
  printf("%.1f\n", distancia_origem(&pt));
  return 0;
}
