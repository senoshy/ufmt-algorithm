#include <stdio.h>
#include <stdlib.h>

float mult(float a, float b) { return a * b; }

float soma(float a, float b) { return a + b; }

float sub(float a, float b) { return a - b; }

float divisao(float a, float b) {
  if (b == 0) {
    fprintf(stderr, "ERROR: a divisao por zero é invalida.\n");
    return 0.0f;
  }

  return a / b;
}

float resto(float a, float b) {
  if (b == 0) {
    fprintf(stderr, "ERROR: a divisao por zero é invalida.\n");
    return 0.0f;
  }

  int q = (int)(a / b);
  return a - (q * b);
}

int main(void) {
  float v1, v2, r = 0.0f;
  char op;

  scanf("%f %c %f", &v1, &op, &v2);

  switch (op) {
  case '+':
    r = soma(v1, v2);
    printf("Resultado: %.2f", r);
    break;
  case '-':
    r = sub(v1, v2);
    printf("Resultado: %.2f", r);
    break;
  case '*':
    r = mult(v1, v2);
    printf("Resultado: %.2f", r);
    break;
  case '/':
    r = divisao(v1, v2);
    printf("Resultado: %.2f", r);
    break;
  case '%':
    r = resto(v1, v2);
    printf("Resultado: %.2f", r);
    break;
  default:
    printf("opçao invalida.\n");
  }

  return 0;
}
