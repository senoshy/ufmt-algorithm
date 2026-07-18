#include <stdio.h>
int main() {
  int i = 1, p = 1, n;
  scanf("%d", &n);
  while (i <= n) {
    p = p * i;
    i++;
  }
  printf("%d\n", p);
}
/*
i = 1
p = 1
n = 5

i = 1 <= 5

p = 1 * 1
i = 1 + 1

output 1

i = 2
p = 1
n = 5

i = 2 <= 5

p = 1 * 2
i = 2 + 1

output 2

i = 3
p = 2
n = 5

i = 3 <= 5

p = 2 * 3
i = 3 + 1

output 6

i = 4
p = 6
n = 5

i = 4 <= 5

p = 6 * 4
i = 4 + 1

output 24

i = 5
p = 24
n = 5

i = 5 <= 5

p = 24 * 5
i = 5 + 1

output 120
*/
