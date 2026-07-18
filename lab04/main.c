#include <stdio.h>

int main() {
  int x = 0;

  if (x > 0) {
    if (x < 100) {
      if (x % 2 == 0) {
        printf("par entre 1 e 99\n");
      }
    }
  }

  if (x > 0 && x < 100 && x % 2 == 0) {
    printf("par entre 1 e 99\n");
  }
}
