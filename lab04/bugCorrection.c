#include <stdio.h>
int main() {
  int mes, dias;
  printf("Mes (1-12): ");
  scanf("%d", &mes);

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    dias = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    dias = 30;
    break;
  case 2:
    dias = 28;
    break;
  default:
    printf("Mes invalido\n");
    dias = -1;
  }
  if (dias > 0)
    printf("%d dias\n", dias);
  return 0;
}
