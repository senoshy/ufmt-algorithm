#include <math.h>
#include <stdio.h>
int main() {
  float base, altura;
  float hipotenusa, area;
  printf("Base: ");
  scanf("%f", &base);
  printf("Altura: ");
  scanf("%f", &altura);
  hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
  area = (base * altura) / 2;
  printf("Hipotenusa: %.4f\n", hipotenusa);
  printf("Area: %.4f\n", area);
  return 0;
}
