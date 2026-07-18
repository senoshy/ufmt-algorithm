#include <stdio.h>

int main() {
  char *msg = "ola";
  msg[0] = 'O'; /* tentativa de modificar */
  printf("%s\n", msg);
}
